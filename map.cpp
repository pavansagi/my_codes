#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;
int main()
{
	map<int,int> mp;
	int x,a,b;
	cin >> x;
	while(x--)
	{   cin >> a >> b;
		mp.insert(p(a,b));
	}
	
	for(auto it=mp.begin();it!=mp.end();it++)
	{
		cout << it->first << '\t' << it->second << endl;
	}
	cout << mp.count(6);
	return 0;
}
