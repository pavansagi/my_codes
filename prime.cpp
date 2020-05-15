#include<iostream>
#include<vector>
#include<string>
#include<stack>
#define ll long long
using namespace std;
const int m=998244353;
const int N=1000000;
ll modi(ll a,ll n)
{ll res=1;
	while(n)
	{if(n%2){res=(res*1LL*a)%m;}
	 n=n/2;
     a=(1LL*a*a)%m;
	}
	return res;
}
vector< vector<ll> > a(N,vector<ll>(4));
int main()
{  
	int t;
	cin >> t;
	while(t--)
	{   ll j,k,v=150;
		string s;
		cin >> s;
		stack<int> st;
		int x,op,y;
		 a[0]={modi(4,m-2),modi(4,m-2),modi(4,m-2),modi(4,m-2)};
		 if(s[0]=='#'){{for(ll i:a[0])cout << i << " ";}cout << endl;continue;}
		for(ll i=0;i<s.length();i++)
		{
			if(s[i]==')')
			{ 
	          y=st.top(),st.pop();op=st.top(),st.pop();x=st.top(),st.pop();
               if(y==35)j=0;else j=y;if(x==35)k=0;else k=x;	
              
               if(op==38)
                { a[v][0]=((a[j][0]%m*a[k][0]%m)%m+(a[j][0]%m*(a[k][1]%m+a[k][2]%m+a[k][3]%m)%m)%m+(a[k][0]%m*(a[j][1]%m+a[j][2]%m+a[j][3]%m)%m)%m+(a[j][2]%m*a[k][3]%m)%m+(a[j][3]%m*a[k][2]%m)%m)%m;
				  a[v][1]=(a[j][1]%m*a[k][1]%m)%m;
				  a[v][2]=((a[j][2]%m*a[k][1]%m)%m+(a[k][2]%m*a[j][1]%m)%m+(a[j][2]%m*a[k][2]%m)%m)%m;
				  a[v][3]=a[v][2];  }
			   if(op==124)
                { a[v][1]=((a[j][1]%m*a[k][1]%m)%m+(a[j][1]%m*(a[k][0]%m+a[k][2]%m+a[k][3]%m)%m)%m+(a[k][1]%m*(a[j][0]%m+a[j][2]%m+a[j][3]%m)%m)%m+(a[j][2]%m*a[k][3]%m)%m+(a[j][3]%m*a[k][2]%m)%m)%m;
				  a[v][0]=(a[j][0]%m*a[k][0]%m)%m;
				  a[v][2]=((a[j][2]%m*a[k][0]%m)%m+(a[k][2]%m*a[j][0]%m)%m+(a[j][2]%m*a[k][2]%m)%m)%m;
				  a[v][3]=a[v][2];}
			   if(op==94)
			   {  a[v][0]=((a[j][0]%m*a[k][0]%m)%m+(a[j][1]%m*a[k][1]%m)%m+(a[j][2]%m*a[k][2]%m)%m+(a[j][3]%m*a[k][3]%m)%m)%m;
				  a[v][1]=((a[j][0]%m*a[k][1]%m)%m+(a[j][1]%m*a[k][0]%m)%m+(a[j][2]%m*a[k][3]%m)%m+(a[j][3]%m*a[k][2]%m)%m)%m;
				  a[v][2]=((a[j][0]%m*a[k][2]%m)%m+(a[j][1]%m*a[k][2]%m)%m+(a[j][2]%m*a[k][0]%m)%m+(a[j][2]%m*a[k][1]%m)%m)%m;
				  a[v][3]=a[v][2];
			   }
			   st.push(v);
			   v++;
		    } 
		    else if(s[i]=='(')continue;
		    else st.push(s[i]);
	   }
	   ll i=st.top();
	   for(int j=0;j<4;j++)cout << a[i][j] << " ";
	   cout << endl;
	}              
}
