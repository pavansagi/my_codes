#include<bits/stdc++.h>
using namespace std;
#define fo for(auto it=s.begin();it!=s.end();it++)
int main()
{
	multiset<int> s;
	int a,b;
	cin >> a;
	while(a--)
	{
		cin >> b;
		s.insert(b);
	}
	s.insert(4);
	s.insert(4);
	s.insert(4);
	fo
	{
		cout << *it << " ";
	}
	auto it1=s.lower_bound(4);
	auto it2=s.upper_bound(4);
	
	cout  << endl << binary_search(s.begin(),s.end(),8);
	
	return 0;
}
