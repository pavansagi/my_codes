#include<iostream>
using namespace std;
bool upper(int n,int a[],int x)
{  
	if(n==0)
	{
		if(a[n]>a[n+1])
		{return true;}
		else
		{return false;}
	}
	if(n==x-1)
	{
		if(a[n]>a[n-1])
		{return true;}
		else
		{return false;}
	}
	if(a[n]>a[n-1]&&a[n]>a[n+1])
	{return true;}
	return false;
}
bool lower(int n,int a[],int x)
{ 
	if(n==0)
	{
		if(a[n]<a[n+1])
		{return true;}
		else
		{return false;}
	}
	if(n==x-1)
	{
		if(a[n]<a[n-1])
		{return true;}
		else
		{return false;}
	}
	if(a[n]<a[n-1]&&a[n]<a[n+1])
	{return true;}
	return false;
}
bool ins(int n,int a[],int x)
{  
	if(n==0||n==x)
	{return false;}
	if(a[n]>a[n-1]&&a[n]<a[n+1])
	{return true;}
	return false;
}
bool des(int n,int a[],int x)
{  
	if(n==0||n==x)
	{return false;}
	if(a[n]<a[n-1]&&a[n]>a[n+1])
	{return true;}
	return false;
}
int main()
{ int n,q,sum=0;
	cin >> n >> q;
	int a[n],pre[n],sm[n];
	for(int i=0;i<n;i++)
	{  
		cin >> a[i];
	}
/*	for(int i=0;i<n;i++)
	{
	  if(lower(i,a,n)||upper(i,a,n))
	  { pre[i]=1;}
	  else
	  { pre[i]=0;}
	  sm[i]=sum+pre[i];
	  sum=sum+pre[i];
  }*/
  
	while(q--)
	{  int l,r;
		cin >> l >> r;
		l=l-1;
		r=r-1;
		/*if((sm[l]%2==0&&pre[l]==1&&sm[r]%2==0&&pre[r]==1)||(sm[l]%2==1&&pre[l]==1&&sm[r]%2==1&&pre[r]==1)||(sm[l]%2==1&&pre[l]==1&&sm[r]%2==1&&pre[r]==0&&sm[l]!=sm[r])||(sm[l]%2==0&&pre[l]==1&&sm[r]%2==0&&pre[r]==0&&sm[l]!=sm[r])||(sm[l]%2==0&&pre[l]==0&&sm[r]%2==1&&pre[r]==0)||(sm[l]%2==1&&pre[l]==0&&sm[r]%2==0&&pre[r]==0)||(sm[l]==sm[r]&&pre[l]==0&&pre[r]==0))
		 {
			 cout << "YES" << endl;
		 }
		 else
		 {
			 cout << "NO" << endl;
		 }*/
	   if((a[l]<a[l+1]&&a[r]<a[r-1])||(a[l]>a[l+1]&&a[r]>a[r-1]))
		 {
			 cout << "YES" << endl;
		 }
		 else
		 {
			 cout << "NO" << endl;
		 }
	    
	}
	return 0;

}	
