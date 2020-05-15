#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long x1,y1,x2,y2;
		cin >> x1 >> y1 >> x2 >>y2;
		if(x1>2)
		{
			x1=2;
			y1=y1+1;
		}
		else
		{
			x1=2;
		}
		if(x2<2)
		
		{
			x2=2;
			y2=y2-1;
		}
		else
		x2=2;
		long long c0=0,c1=0;
		vector<int> a={3,9,14,15,20,25,26,31,37,42,43,48,53,54,59,65,70,71,76,81,82,87,93,98,99,105,110,111,116,121,122,
			127,133,138,139,144,149,150,155,161,166,167,172,177,178,183,189,194,195,200,201,206,207,212,217,218,223,229,234,235,240,245,246,
			251,257,262,263,268,273,274,279,285,290,291,296,302,303,308,313,314,319,325,330,331,336,341,342,347,353,358,359,364,369,370,375,381,386,387,392,397,398};
	
			if(y1==y2 and binary_search(a.begin(),a.end(),y1%400))
			{ cout << 1 << endl;}
			else
			{
				long long r=int(y1/400)*101;
				long long r1=int(y2/400)*101;
				long long p=y1%400;
				long long p1=y2%400;
				for(int i:a)
				{
					if(i<p)
					c0++;
					else
					break;
				}
				for(int i:a)
				{
					if(i<=p1)
					c1++;
					else
					break;
				}
				cout << (r1+c1)-(r+c0) << endl;
			}
			
	}		

	return 0;
}
