//SNUG_FIT
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
		int n,x,sum=0;
		cin >> n;
		vector<int> a,b;
	    for(int i=0;i<n;i++)
	    {
			cin >> x;
			a.push_back(x);
		}
		for(int i=0;i<n;i++)
	    {
			cin >> x;
			b.push_back(x);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		for(int i=0;i<n;i++)
		{
			sum=sum+min(a[i],b[i]);
		 }
		 cout << sum << endl;
	}
	return 0;
}
