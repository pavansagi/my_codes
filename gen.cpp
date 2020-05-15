#include<bits/stdc++.h>
using namespace std;
vector<int> prm(100005,1);
int r1,r2;
void init()
{
    prm[0]=prm[1]=0;
    for(int i=2;i*i<100005;i++)
    {
        if(prm[i])
        {
            for(int j=i+i;j<100005;j=j+i)
            {
                prm[j]=0;
            }
        }
    }
    for(int i=1;i<=100004;i++)prm[i]+=prm[i-1];
}
int calp(string s,int n,int i,int sc)
{   if(i<=0||s[i-1]=='*')return 9999;
   // cout << i << " " << n << endl;
    if(i==1)return sc;
    //cout << sc << " " << i << endl;
   int A=prm[i];
    float x=(float)(A/i);
    float y=(float)(r1/r2);
    if(x>=y)return min(calp(s,n,i-1,sc+1),min(calp(s,n,i-2,sc+1),calp(s,n,i-A,sc+1)));
    return min(calp(s,n,i-1,sc+1),calp(s,n,i-2,sc+1));
}
int main()
{   init();   //########
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&r1,&r2);
        string s;
        int n;
        scanf("%d",&n);
        scanf("%s",s);
        int z=calp(s,n,n,0);
        if(z==9999)cout << "No way!" << endl;
        else {cout << z << endl;}
    }
}