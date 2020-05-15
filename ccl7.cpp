#include<bits/stdc++.h>
#define maxo (1 << 10)
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	clock_t o;
	o=clock();
	cout << maxo;
    o=o-clock();
	cout << count << " "<<(float)o/CLOCKS_PER_SEC << endl;
	return 0;
}
