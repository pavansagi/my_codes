#include<bits/stdc++.h>
using namespace std;

int main()
{ 
	string msg,crc,ans="";
	getline(cin,msg);
	getline(cin,crc);
	ans+=msg;
	for(int i=0;i<crc.length()-1;i++)
	ans+='0';
	for(int i=0;i<=ans.length()-crc.length();)
	{ for(int j=0;j<crc.length();j++)
		{ans[i+j]=ans[i+j]==crc[j]?'0':'1';}
		for(;i<ans.length()&&ans[i]!='1';i++);
	}
	cout << msg+ans.substr(ans.length()- crc.length()+1);
  return 0;
}
