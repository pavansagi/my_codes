#include <bits/stdc++.h> 
using namespace std; 
int fact(int n,int p) 
{ 
	int count = 0,p1=0; 
	while (!(n % 2)) {n=n/2;count++;} 
	for (long long i = 3; i <= sqrt(n); i += 2) { 
		while (n%i == 0){count++;n=n/i;}} 	
    if(n>2)count++;
	if(count>=p){return 1;}
	return 0;
}
int main() 
{ 
	int t;
	cin >> t;
	while(t--)
	{ int f,p,l;
		cin >> f >> p;
		 l=fact(f,p);	
	  cout << l << endl;
    }
		
	return 0; 
} 
