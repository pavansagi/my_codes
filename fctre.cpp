#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define REP(i,n) for(int i=1;i<=n;i++)
const int mod=1e9+7;
int timer=0;
long long flat[200004],nodef[100001],elef[1000001],start[100001],ans[100001],over[100001],inv[1000001],level[100001],lca[100001][20];
vector<pair<int,int>> ar[2000002];
vector<int> v[100001];
using namespace std;

ll power(ll a,ll n)
{
	ll ans=1;
	while(n)
	{
		if(a%2==0){ans=(ans*1LL*a)%m;n=n-1}
		else{
			a=(a*1LL*a)%m;n=n/2;
		}
	}
}
void init()
{   int N=1e6;
	ar[1].pb({1,0})
	for(int i=2;i<=N;i++)
	{   if(ar[i].size()==0)
		{
		  ar[i].pb({i,1});
		  for(int j=2*i;j<=N;j=j+i)
		  {
		  	int cnt=0,x=j;
		  	while(x%i==0){cnt++;x=x/i;}
            ar[j].pb(i,cnt);
		  }
	    }
	}
	inv[0]=inv[1]=1;
	for(int i=2;i<=2000000;i++)
	{
		a[i]=power(i,mod-2);
	}
}
void initlca(int n)
{
	for(int i=1;i<20;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(lca[j][i-1]!=0)
			{
				lca[j][i]=lca[lca[j][i-1]][i-1];
			}
		}
	}
}
int getlca(int a,int b)
{

}
bool()


