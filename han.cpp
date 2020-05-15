#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n,r=1,j=0;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	cin >> a[i];
	while(pow(2,r)<n+r+1)
	{r++;}
	
	int ham[n+r+1];
	for(int i=1;i<n+r+1;i++)
	{ if((ceil(log(i)/log(2))-floor(log(i)/log(2)))==0)
		{ ham[i]==0;}
	  else
	  { ham[i]=a[j];
		  j++;
		 }
	 }
	 for(int i=0;i<r;i++)
	 { int x=(int)pow(2,i);
		 for(int j=1;j<n+r+1;j++)
		 { if((j >> i)&1==1)
			 {ham[x]=ham[x]^ham[j];}
		 }
	 }
	 for(int i=1;i<n+r+1;i++)
	cout << ham[i];
	return 0;
}
