#include<iostream>
#include<unordered_set>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{  
		int a,b,p;
		cin >> a >> b;
		vector<int> x(a),y(b);
		vector<int> xp,yp;
		unordered_set<int> xn,yn;
		
		for(int i=0;i<a;i++)
		{
			cin >> p;
			x[i]=abs(p);
			if(p<0)
			xn.insert(p);
			else
			xp.push_back(p);
			
		}
		for(int i=0;i<b;i++)
		{
			cin >> p;
			y[i]=abs(p));
			if(p<0)
			yn.insert(p);
			else
			yp.push_back(p);
		}
		sort(x.begin(),x.end());
		sort(y.begin(),y.end());
		sort(xp.begin(),xp.end());
		sort(yp.begin(),yp.end());
		int count=0;
		for(int i=0;i<a;i++)
		 cout << x[i] << " ";
		for(int i=0;i<a;i++)
		{  if(x[i]==0)
			continue;
			
			for(int j=0;j<yp.size();j++)
			{
				if(yp[j]==0)
				{ count=count+(b-1);
					continue;}
				if((x[i]*x[i])/yp[j]==0)
				break;
				/*if(y[j]<0)
				{ continue;}*/
				
				if((x[i]*x[i])%yp[j]==0&&yn.find(((long long)-1*x[i]*x[i])/yp[j])!=yn.end())
				{ //cout << x[i] << " " << y[j] << " " << (-1*x[i]*x[i])/y[j] << "a" << endl;
					count++;}
			}
		}
		for(int i=0;i<b;i++)
		{  if(y[i]==0)
			continue;
			for(int j=0;j<xp.size();j++)
			{
				if(xp[j]==0)
				{ count=count+(a-1);
					continue;}
				if((y[i]*y[i])/xp[j]==0)
				break;
				/*if(x[j]<0)
				{ continue;}*/
				
				if((y[i]*y[i])%xp[j]==0&&xn.find(((long long)-1*y[i]*y[i])/xp[j])!=xn.end())
				{  //cout << y[i] << " " << x[j] << " " << (-1*y[i]*y[i])/x[j] << "b" << endl;
					count++;}
			}
		}
		cout << count << endl;
	}
	return 0;
}
		
