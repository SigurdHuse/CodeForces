#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int n, k, l, c,d,p,nl,np;
	cin >> n >> k >> l>>c >> d>> p >> nl >> np;
	int ml = k * l/nl;
	int slices = c * d;
	int s_s = p / np;
	cout << min(ml/n,min(slices/n, s_s/n)) << endl;
}
