#include<bits/stdc++.h>
#define  pb push_back
using namespace std;
int fa[1000005];

void init()
{   for(int i=2;i*i<=1000004;i++)
	 {   if(fa[i]!=0)continue;
	 	fa[i]=1;
	 	for(int j=i+i;j<=100004;j=j+i)
	 	{   if(fa[j]!=0)continue;
	 		fa[j]=i;
	 	}
	 }
}



int main()
{
   memset(fa,0,sizeof(fa[0])*1000005);init();
  int t;
  cin >> t;
  while(t--)
  {
  	 long long n,k;
  	 cin >> n >> k;
  	 long long an=0;
  	 if(fa[n]==1){an=n*2;an=an+(k-1)*2;}
  	 else{an=n+fa[n];an=an+(k-1)*2;}
  	 cout << an << endl;
  }
	
}