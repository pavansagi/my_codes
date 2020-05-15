#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ios_base::sync_with_stdio(false);
	    cin.tie(NULL);
	    cout.tie(NULL);
		int a,b;
		
		cin >> a >> b;
		int x[a],y[b];
		unordered_map<int,int> p,q;
		for(int i=0;i<a;i++)
		{
			cin >> x[i];
			p.insert(pair<int,int>(x[i],1));
		}
		for(int i=0;i<b;i++)
		{
			cin >> y[i];
			q.insert(pair<int,int>(y[i],1));
		}
		int count=0;
		for(int i=0;i<a;i++)
		{    if(x[i]==0)
			continue;
			  
			   for(int j=0;j<b;j++)
			  {   if(y[j]==0)
				  continue;
			   if(y[j]>0&&((-1*x[i]*x[i])%y[j])==0&&q.find(-1*(x[i]*x[i])/y[j])!=q.end())
			   {  // cout << x[i] << " "<< y[j] << " " << (-1*x[i]*x[i])/y[j] << endl;
				   count++;
			   }
			 }
		}
	
		 if(q.find(0)!=q.end()||p.find(0)!=p.end())
			   { count+=(b-1)*(a-1);}
		
		for(int i=0;i<b;i++)
		{  if(y[i]==0)
			continue;
			for(int j=0;j<=a;j++)
			{   if(x[j]==0)
				  continue;
			   if(x[j]>0&&((-1*y[i]*y[i])%x[j])==0&&q.find(-1*(y[i]*y[i])/x[j])!=q.end())
			   {    //cout << y[i] << " " << x[j] << " "<< (-1*y[i]*y[i])/x[j] << endl;
				   count++;
			   }	
			}
		}
		cout << count << endl;
		
	}
	return 0;
}
