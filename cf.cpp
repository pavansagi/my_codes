#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
using namespace std;

int main()
{   
	int t;
    cin >> t;
	while(t--)
	{  
		int n,p;
		cin >> n >> p;
		long long g[n+1],a[n+1];
		for(int i=1;i<=n;i++){cin >> g[i];}
		int mx=0,R,fmx=0,fr=1;
	   for(int i=2;i<n;i++)
	   {
	   	 a[i]=(g[i]>g[i-1]&&g[i]>g[i+1]);
	   }  a[1]=a[n]=0;
	   for(int i=2;i<n;i++)a[i]+=a[i-1];
	   for(int i=1;i<=n;i++)
	   { 
	   	 if(i+p-1<=n){a[i]=a[i+p-2]-a[i];}
	   	 else{a[i]=-990;}
	   	 
	   }
	   for(int i=1;i<=n;i++)
	   {   if(a[i]<0)break;
	   	 if(a[i]>fmx){fmx=a[i];fr=i;}
	   }
	
	    cout << fmx+1 << " " << fr << endl;
	}
}












