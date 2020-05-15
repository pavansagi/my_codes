#include<iostream>
#include<bitset>
#include<cmath>
#define endl '\n'
#define ll long long
using namespace std;
void solve()
{
    ll x,y,l,r,ans=0,tans=0,pw,ans1,tp=0,ans2,gans,gans2,gans3;
    cin >> x >> y >> l >> r;
    ans=l,tans=l;
    for(ll i=40;i>=0;i--)
    {
        if((1ULL<<i)&x)
        {
            tans+=(1ULL<<i);
            if(tans>=l&&tans<=r&&!((1ULL<<i)&ans)){ans=tans;}
            else{tans=ans;}
        }
    }
    for(ll i=40;i>=0;i--)
    {
        if((1ULL<<i)&y)
        {
            tans+=(1ULL<<i);
            if(tans>=l&&tans<=r&&!((1ULL<<i)&ans)){ans=tans;}
            else{tans=ans;}
        }
    }ans1=ans; 
    ans=l,tans=l;
    for(ll i=40;i>=0;i--)
    {
        if((1ULL<<i)&y)
        {
            tans+=(1ULL<<i);
            if(tans>=l&&tans<=r&&!((1ULL<<i)&ans)){ans=tans;}
            else{tans=ans;}
        }
    }
    for(ll i=40;i>=0;i--)
    {
        if((1ULL<<i)&x)
        {
            tans+=(1ULL<<i);
            if(tans>=l&&tans<=r&&!((1ULL<<i)&ans)){ans=tans;}
            else{tans=ans;}
        }
    }
       ans2=ans;tans=l,ans=l;
      for(ll i=40;i>=0;i--)
    {
        if(((1ULL<<i)&x)||((1ULL<<i)&y))
        {
            tans+=(1ULL<<i);
            if(tans>=l&&tans<=r&&!((1ULL<<i)&ans)){ans=tans;}
            else{tans=ans;}
        }  
    }   
    gans=ans,gans2=ans1,gans3=ans2;
    if((1ULL)*(x&ans)*(y&ans)>(1ULL)*(x&ans1)*(y&ans1)){ans1=ans;}
    if((1ULL)*(x&ans)*(y&ans)==(1ULL)*(x&ans1)*(y&ans1)){ans1=(ans1<ans)?ans1:ans;}
        if((1ULL)*(x&ans2)*(y&ans2)>(1ULL)*(x&ans1)*(y&ans1))ans1=ans2;
    if((1ULL)*(x&ans2)*(y&ans2)==(1ULL)*(x&ans1)*(y&ans1)){ans1=(ans1<ans2)?ans1:ans2;}
         
    tans=gans;
   
    for(ll i=40;i>=0;i--)
    {
        if(((1ULL<<i)&tans))
        {   
            tans^= (1ULL<<i);
            tans=tans|(((1ULL<<(i))-1)&x)|(((1ULL<<(i))-1)&y);
           // cout << tans << " ";
            if(tans>=l&&tans<=r&&(1ULL)*(x&tans)*(y&tans)>(1ULL)*(x&ans1)*(y&ans1)){ans1=tans;}
            else if(tans>=l&&tans<=r&&(1ULL)*(x&tans)*(y&tans)==(1ULL)*(x&ans1)*(y&ans1)){ans1=(ans1<tans)?ans1:tans;}
            tans=gans;
        }
    }
    tans=gans2;
    for(ll i=40;i>=0;i--)
    {
        if(((1ULL<<i)&tans))
        {
            tans^= (1ULL<<i);
            tans=tans|(((1ULL<<(i))-1)&x)|(((1ULL<<(i))-1)&y);
            if(tans>=l&&tans<=r&&(1ULL)*(x&tans)*(y&tans)>(1ULL)*(x&ans1)*(y&ans1)){ans1=tans;}
            else if(tans>=l&&tans<=r&&(1ULL)*(x&tans)*(y&tans)==(1ULL)*(x&ans1)*(y&ans1)){ans1=(ans1<tans)?ans1:tans;}
            tans=gans2;
        }
    }
    tans=gans3;
    for(ll i=40;i>=0;i--)
    {
        if(((1ULL<<i)&tans))
        {
            tans^= (1ULL<<i);
            tans=tans|(((1ULL<<(i))-1)&x)|(((1ULL<<(i))-1)&y);
            if(tans>=l&&tans<=r&&(1ULL)*(x&tans)*(y&tans)>(1ULL)*(x&ans1)*(y&ans1)){ans1=tans;}
            else if(tans>=l&&tans<=r&&(1ULL)*(x&tans)*(y&tans)==(1ULL)*(x&ans1)*(y&ans1)){ans1=(ans1<tans)?ans1:tans;}
            tans=gans3;
        }
    }
    tans=(x|y);
    for(ll i=40;i>=0;i--)
    {
        if(((1ULL<<i)&tans))
        {
            tans^= (1ULL<<i);
            tans=tans|(((1ULL<<(i))-1)&x)|(((1ULL<<(i))-1)&y);
            if(tans>=l&&tans<=r&&(1ULL)*(x&tans)*(y&tans)>(1ULL)*(x&ans1)*(y&ans1)){ans1=tans;}
            else if(tans>=l&&tans<=r&&(1ULL)*(x&tans)*(y&tans)==(1ULL)*(x&ans1)*(y&ans1)){ans1=(ans1<tans)?ans1:tans;}
            tans=(x|y);
        }
    }
    if((1ULL)*(x&ans1)*(y&ans1)==0){cout << l << endl;return;}
    cout << ans1 << endl;
}
int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){solve();}
}  

 
                                              
