#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[1000001];
int gcd(int a,int b)
{ return __gcd(a,b);}
int main()
{
	ll n;
	cin >> n;
	ll a[n+2],mx=0,p1=0,p2=0;
	for(int i=2;i<n+2;i++)cin >> a[i];
	a[0]=a[1]=1;
    for(int i=2;i<n;i++)
    {  
		if(a[i]+a[i-2]>a[i]&&a[i]>0)a[i]=a[i]+a[i-2];
		else if(a[i-1]>0)a[i]=a[i-1];
		else a[i]=0;
		
	}
	cout << a[n+1];
		
	
	//cerr << "Time : " <<  (((double)clock()) / (double)CLOCKS_PER_SEC)-tm << "s\n";
}
