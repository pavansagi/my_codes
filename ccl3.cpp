#include<climits>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxx(int a,int b)
{
	if(a>b)
	return a;
	
	return b;
}
int main()
{    
	int t;
	long long z=0;
	cin >> t;
	while(t--)
	{
		int n,b,sum=0;
		char k;
		 
		cin >> n;
		vector<vector<int>> a(4,vector<int>(4));
		vector<int> r(4),c(4);
		 while(n--)
		{
			cin >> k;
			cin >> b;
			b=b/3-1;
			a[k-'A'][b]+=1;
		}
		/*a[0]={0,0,0,4};
		a[1]={0,0,3,1};
		a[2]={1,2,0,0};
		a[3]={0,1,0,0};
		/*for(int i=0;i<4;i++)
		{ for(int j=0;j<4;j++)
			{ cin >> k;
				a[i][j]=k;}
			}*/
		
		int maxx=INT_MIN;
		vector<int> max;
	    
			for(int j=0;j<4;j++)
			{
				for(int k=0;k<4;k++)
				{     if(k==j)
					  continue;
					for(int l=0;l<4;l++)
					{     if(l==j||l==k)
					       continue;
						for(int m=0;m<4;m++)
						{   if(m==j||m==k||m==l)
					         continue;
							
							max.push_back(a[0][j]);
							max.push_back(a[1][k]);
							max.push_back(a[2][l]);
							max.push_back(a[3][m]);
						
		                  sort(max.rbegin(),max.rend());  
		                  
		                  sum=100*max[0]+75*max[1]+50*max[2]+25*max[3];
		                   sum=sum+(max[0]==0?-100:0)+(max[1]==0?-100:0)+(max[2]==0?-100:0)+(max[3]==0?-100:0);
		                    if(sum>maxx)
		                   { maxx=sum;}
		       
		                   max.clear();
					   }
				   }}
				  
			   
		     }
		  
		   
	   
		cout << maxx << endl;
		z+=maxx;
	}
	cout << z << endl;
	return 0;
}
				
