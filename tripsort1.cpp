#include<bits/stdc++.h>
#define  pb push_back
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m,x,y,z,x1,y1,z1;
		cin >> n >> m;
		map<int,int> mp;
		vector<int> a(n+1);
		for(int i=1;i<=n;i++)cin >> a[i];
		vector<int> ka;
	    int p=1,r=0,k1,k2,k3,f=1;
	    vector<int> v,ans;
	    int i=1;
	    for(int i=1;i<=n;i++)
	    {  
	    	if(a[i]==i){continue;}
	    	else if(i==a[a[i]]){mp[i]=a[i];continue;}
	    	int x=i;
           while(1)
           	{v.pb(x);
             if(a[x]==i)break;
           	  x=a[x];
           	  }
           	while(v.size())
           	{   if(v.size()==2){mp[i]=a[i],mp[a[i]]=i;break;}
           		x=a[v[0]],y=a[v[1]],z=a[v[2]];
           		ans.pb(v[0]),ans.pb(v[1]),ans.pb(v[2]);
           		a[v[0]]=z;a[v[1]]=x;a[v[2]]=y;
           		if(v.size()==3){v.clear();}
           		else{v.erase(v.begin()+1,v.begin()+3);}  }
           	
        
           	if(i!=a[i])i=i-1;
         }
         if(mp.size()%2==1){cout << "-1" << endl;continue;}
         else
         	{for(auto i:mp)
         		{
         			mp.erase(i.second);
         		}}
         //for(auto i:mp){cout << i.first << " " << i.second << endl;}
         for(i=0;i<mp.size();i++)
         { auto j=mp.begin();
         	auto k=mp.begin();k++;k++;
         	x1=j->first;y1=k->first;

             x=a[x1],y=a[y1],z=a[mp[x1]];
           	ans.pb(x1),ans.pb(y1),ans.pb(mp[x1]);
           		a[x1]=z;a[y1]=x;a[mp[x1]]=y;
           	 //for(int i=1;i<=n;i++)cout << a[i] << " ";cout << endl;
            x=a[mp[y1]],y=a[mp[x1]],z=a[y1];
           	ans.pb(mp[y1]),ans.pb(mp[x1]),ans.pb(y1);
           		a[mp[y1]]=y;a[mp[x1]]=z;a[y1]=x;
           	 // for(int i=1;i<=n;i++)cout << a[i] << " ";cout << endl;
           	mp.erase(j->first);
           	mp.erase(k->first);
         }
         if(ans.size()==0){cout << "0" << endl;continue;}
         if(ans.size()/3>m){cout << "-1" << endl;continue;}
         r=ans.size()/3;
         //for(int i:ans)cout << i << " ";
         cout << r << endl;
         while(r--)
		{
			cout << ans[0] << " "<<ans[1]<< " " << ans[2] << endl;
		
			ans.erase(ans.begin(),ans.begin()+3);
		}
		//for(int i=1;i<=n;i++)cout << a[i] << " ";
	}
}