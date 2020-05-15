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
    ans1=l,tans=l;
    ll n=log2(max(x,y))+1;
    tans=(x|y);
    for(ll i=n;i>=0;i--)
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

 
                                              
