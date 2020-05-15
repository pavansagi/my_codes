#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	int x;
	for(int i=0;i<n-1;i++){cin >> x;a[x-1]+=1;}
	for(int i=0;i<n;i++){cout << a[i] << endl;}
}

 














































