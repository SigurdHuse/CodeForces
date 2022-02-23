#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	vector<int> v(3);
	while(tt--){
		for(auto &b : v)cin >> b;
		sort(v.begin(),v.end());
		if(v[0] + v[1] < v[2]-1) cout << "NO" <<endl;
		else cout << "YES" <<endl;
	}
}
