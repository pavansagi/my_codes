#include<bits/stdc++.h>
using namespace std;
string s,ans="",m="";
long long x=1e9;
void solve()
{
	int p=1,q=1;
	for(int i=0;i<ans.length();i++)
	{
		if(ans[i]=='N')p=p-1;
		if(ans[i]=='S')p=p+1;
		if(ans[i]=='E')q=q+1;
		if(ans[i]=='W')q=q-1;
	}
	p=p<=0?x-p:p;
	q=q<=0?x-q:q;
	cout << p << " " << q << endl;
}
int main()
{
	int t;
	cin >> t;
	for(int z=1;z<=t;z++)
	{  int r;
		cin >> s;
		stack st;
		for(int i=0;i<s.length();i++)
		{  if(s[i]=='('){ for(int j=i+1;s[j]!=')';j++)
			                {m=m+s[j];i=j-1;}}
		   else if(s[i]-'0'<10&&s[i]-'0'>=0)st.(push(s[i]));;
		   else if(s[i]==')')
		   {  while(r--)ans=ans+m;}
		   else ans=ans+s[i];}
	  cout << ans << endl;
		cout << "Case #" << z << ": "; 
		solve();
		ans="",m="";
	}
}
