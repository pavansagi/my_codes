#include<iostream>
//#include<cstring>
//#include<cassert>
//#include<ctime>
#include<vector>
#include<algorithm>

using namespace std;
template<typename t>
//if u specified a constant datatype value needs to be constant else use typename
class p{
	private:
	t a;
	t b;
	public:
	p(t p,t q){
	  a=p,b=q;	
	}
};
namespace pq{
  int  val=35;
  inline void pr()
  {
	  printf("hi");
  }
}
	   
template<typename t,int max,typename u>	
u maxi(t a,t b)
{
	return max;
}
int main()
{
	/*int a[10000];
	memset(a,0,sizeof(a));
	clock_t p;
	p=clock();
	assert(a[0]==0);
	for(int i=0;i<10000000;i++)
	    cout << a[i] << " ";
	   cout << endl;
	p=clock()-p;
	cout << (float)p/CLOCKS_PER_SEC ;
	return 0;*/
	using namespace pq;
	p<int> abj(2,3);
	int val=20;
	cout << maxi<int,100,int>(1,4) << " ";
	cout << maxi<char,65,int>('x','y') ;
	cout << endl << val << " ";
	pr();
	//cout << maxi<1000>("pavan","sai");
	 return 0;
}
