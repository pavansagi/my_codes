#include<bits/stdc++.h>

using namespace std;

struct query{
	int l,r,idx;
};
long long int res=0;
query q[200001];
long long int ans[200001];
long long int a[2000001],fre[1000001];
bool comp(query a,query b)
{
	int x=a.l/1000;
	int y=b.l/1000;
	if(x!=y)
	 return x<y;
	 return a.r<b.r;
 }
 void add(int i)
 {
	 long long int val=a[i];
	 long long int f=fre[val];  
	 res=res+(2*f+1)*val;
	 fre[val]++;  //cout << "add" << val << " " << res << " " << fre[i]<< endl;
 }
 void rem(int i)
 {
	  long long int val=a[i];
	 long long int f=fre[val];  //cout << "rem" << val << " " << res << " " << fre[i]<< endl;;
	 res=res-(2*f-1)*val;
	 fre[val]--;
 }
 int main()
 {   for(int i=0;i<=1000000;i++)fre[i]=0;
	 int n,q1,a1,b;
	 cin >> n >> q1;
	 for(int i=1;i<=n;i++)cin >> a[i];
	 
	 for(int i=1;i<=q1;i++)
	 {
		 cin >> a1 >> b;
		 q[i].l=a1,q[i].r=b,q[i].idx=i;
	 }
	 sort(q+1,q+q1+1,comp);
	 int ML=1,MR=0;#334AD4
     for(int i=1;i<=q1;i++)
	 { 
       int L=q[i].l,R=q[i].r,idx=q[i].idx;
       while(MR<R)MR++,add(MR);
       while(ML>L)ML--,add(ML);
       while(MR>R)rem(MR),MR--;
       while(ML<L)rem(ML),ML++;
       
       ans[idx]=res;
    }
    for(int i=1;i<=q1;i++)
    { cout << ans[i] <<endl;}
}
