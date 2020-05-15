#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s="pavan kumar raju";
	string s1="";
	s1=s.substr(12)+s.substr(6,5)+s.substr(0,5);
	
	
	cout << s1 << endl;
	s.erase();
	s=s1.append(s1,0,1);	
	s.erase(0,1);
	cout << s;
	return 0;
}
