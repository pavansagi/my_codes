#include <bits/stdc++.h>
using namespace std;

typedef struct
{
    int in, r, l;
}qq;
long long int cnt[1000006];
long long int ans;
long long int v[200005], an[200005];
int n, t, _;

void add(int p)
{
    ans-=cnt[v[p]]*cnt[v[p]]*v[p];
    cnt[v[p]]++;
    ans+=cnt[v[p]]*cnt[v[p]]*v[p];
}

void rem(int p)
{
    ans-=cnt[v[p]]*cnt[v[p]]*v[p];
    cnt[v[p]]--;
    ans+=cnt[v[p]]*cnt[v[p]]*v[p];
}

bool cmp(qq a, qq b)
{
   /* int x = a.l/_, y = b.l/_;
    return x==y?a.r<b.r:x<y;*/
 	if(a.l/_!=b.l/_) return a.l/_<b.l/_;
	return (a.r<b.r)^((a.l/_)%2);   
}

int main()
{
    scanf("%d %d", &n, &t);
    _ = 1000;

    for(int i = 0;i<n;i++)
        scanf("%lld", &v[i]);
    
    qq que[200005];
    for(int i = 0;i<t;i++)
        scanf("%d %d", &que[i].l, &que[i].r), que[i].in = i;
        
    sort(que,que+t, cmp);
    
    int curl = 0, curr = 0;
    ans = v[0];
    cnt[v[0]] = 1;
    for(int i = 0;i<t;i++)
    {
        int l = que[i].l-1, r = que[i].r-1;
        while(curr<r)
            add(++curr);
        while(curl>l)
            add(--curl);
        while(curl<l)
            rem(curl++);
        while(curr>r)
            rem(curr--);
        an[que[i].in] = ans;
    }
    for(int i = 0;i<t;i++)
        printf("%lld\n", an[i]);
    
    return 0;
}
