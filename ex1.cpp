#include<bits/stdc++.h>
using namespace std;
int main()
{  
	int t;
	cin >> t;
	//long long ll=(long long)(1 << 40);
    //cout << ll << endl;
	while(t--)
	{
		long long x,y,l,r,p=1,ans=0;
    cin >> x >> y >> l >>r ;
    long long f=l;
    if(x==0||y==0)f=0;
    for(long long i=l;i<=r;i++)
    {if((i&x)*(i&y)>ans){ans=(i&x)*(i&y);f=i;}
         
    }

    cout << f << endl;
   
	}
}