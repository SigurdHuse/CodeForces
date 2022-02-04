#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int k,l,m,n,d;
	cin >> k >> l >> m >> n;
	cin >> d;
	vector<bool> v(d + 1);
	for(int i : {k,l,m,n}){
		for(int j = i; j <= d; j+=i){
			v[j] = 1;
		}
	}
	cout << accumulate(v.begin(), v.end(),0) << endl;
}
