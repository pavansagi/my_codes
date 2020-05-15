#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
		int n,m,x;
		cin >> n >> m;
	
		vector<vector<int>> a(n+1);
		
		for(int i=1;i<=n;i++)
		{for(int j=1;j<=n;j++)
			{a[i].push_back(j);}
		
	    }
	   
		   
	    while(m--)
	    {
			vector<int> g;
			for(int i=0;i<n;i++)
			{   cin >> x;
				g.push_back(x);
			}
		    for(int i=0;i<n;i++)
		    { for(int j=i;j>=0;j--)
				{  
					auto it=a[g[i]].begin();
					for(;it!=a[g[i]].end();it++){if(*it==g[j])break;}
					if(it==a[g[i]].end())continue;
					a[g[i]].erase(it);}
			}		
		  /* for(auto i:a)
		   { for(int j:i)
			   { cout << j << " ";} cout << endl;}
		   }*/
	     }
		   vector<int> h(n+1,-1);
		   int k,d,r=0;
		   for( int i=1;i<n+1;i++)
		   {   if(a[i].size()==0){h[i]=0;continue;}
			   for(int j:a[i])
			   {  k=0,d=0;  
				   while(h[j]!=j||d==n)
				   {   if(h[j]==-1||h[j]==0){k=1;break;} }
				   if(k==1){h[i]=j;break;}
				   else{h[i]=0;}
				   d++;
			   }
		   }
		   for(int j:h)if(j==0)r++;
		   cout << r << endl;
		   for(int j=1;j<n+1;j++)
			   { cout << h[j] << " ";}
		  cout << endl; 
	}
    return 0;
}
