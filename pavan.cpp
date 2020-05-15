#include<bits/stdc++.h>
using namespace std;

#define vi vector< int >

int main()
{
	vi v;
	int a,b;
	cin >> a;
	while(a--)
	{
		cin >> b;
		v.push_back(b);
	}
	auto it=v.begin();
	reverse(it,it+v.size());
	
	v.insert(v.end(),5,12);
	for(int x:v)
	{
		cout << x << " ";
	}
	cout << endl << count(v.begin(),v.end(),12);
	return 0;
}


	
