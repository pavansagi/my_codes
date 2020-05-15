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
	  ll x,y,a,b;
	  cin >> x >> y >> a >> b;
	  ll c=0,p=0;
	  p=p+abs(x)*a+abs(y)*a;
	  		
	  while(x!=0||y!=0)
	  {
	  	if(x>0&&y>0)
	  	{
	  		if(x>y){c=c+y*b;x=x-y;y=0;}
	  		else{c=c+x*b;y=y-x;x=0;}
	  		
	  	}   
	  	else if(x<0&&y<0)
	  	{
	  		if(x>y){c=c+abs(x)*b;y=y-x;x=0;}
	  		else{c=c+abs(y)*b;x=x-y;y=0;}
	  	}   
	  		c=c+abs(x)*a+abs(y)*a;
	  		x=0,y=0;

	  }if(p<c)c=p;
	  cout << c  << endl;
   }
}