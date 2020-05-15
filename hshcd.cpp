#include<iostream>
#include<vector>
#include<string>
using namespace std;
int P=998244353;
int mod(int a, int b) 
{ 
    return (a%P*(b^P-2)%P)%P; 
} 
int main()
{ int t,b;
	cin >> t,b;
	cout << mod(t,b);

	return 0;
}
