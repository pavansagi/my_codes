#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;
vector<vector<int>> gph;
int maxx=-999;
int lal(vector<int> p,int x)
{
	if(p.size()==0)
	{ return 0;}
	int r=0;
	for(int a:p)
	{
		r=r+x+lal(gph[a],x+1);
	}
	if(r>maxx)
	maxx=r;
	return maxx;
}
	
int main()
{  
	int n;
	cin >> n;
	vector<string> a(n);
	gph.resize(n);
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	unordered_map<string,int> dic;
	for(int i=0;i<n;i++)
	{
		dic[a[i]]=i;
	}
	for(int i=0;i<n;i++)
	{
		string s=a[i];
		for(int j=0;j<(int)s.length();j++)
		{
			string maybe=s.substr(0,j)+s.substr(j+1);
			auto it=dic.find(maybe);
			if(it!=dic.end())
			{ gph[(*it).second].push_back(i);}
		}
	}
	for(auto it=dic.begin();it!=dic.end();it++)
	{
		cout << (*it).first << " " << (*it).second << endl;
	}
	for(int i=0;i<n;i++)
	{  cout << i << " ";
		for(int g:gph[i])
		{ cout << g << " ";}
		cout << endl;}
	int ans=lal(gph[0],0);
	cout << ans << endl;
	return 0;
}
