#include<iostream>
#include<vector>
#include<ctime>
using namespace std;
int main()
{  
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{   srand(time(0)); 
		int n,k,m,mx=-6,r=0,ans;
		cin >> n >> m >> k;
		int a[k];
		for(int i=0;i<n;i++)
		{ mx=-6;for(int j=0;j<k;j++)
			{ cin >> a[j];}
			ans=(r==k)?a[0]:a[r++];
		  cout << rand()%m+1 << " ";}
		cout << endl;
		
    }
	return 0;
}
