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
		int n,p,q;
		cin >> n >> p;
		vector<int> a;
		int x=n;
		while(x--)
		{
			cin >> q;
			a.push_back(q);
		}
		
		sort(a.begin(),a.end());
		a.push_back(p);
		int f=0;
		for(int i=n-1;i>=0;i--)
		{
			if(p%a[i]==0&&a[i+1]%a[i]==0)
			 f++;
		}
        if(f==n)
        {
			cout << "NO"  << endl;
		}
		
        else
		{
			cout << "YES" << " " ;
			
			vector<int> ans(n);
		
			for(int i=n-1;i>=0&&p>0;i--)
			{   
				if(p%a[i]==0)
				{ ans[i]=p/a[i]-1;
					p=p-(a[i]*ans[i]);
					
				}
				else
				{  ans[i]=p/a[i]+1;
					p=p-(a[i]*ans[i]);
				}
			}		
			for(int i=0;i<n;i++)
			{
				cout << ans[i] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
