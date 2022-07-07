#include <bits/stdc++.h>
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++)  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin >> n >> m;
	vector<int> v(m);
	for(auto &b : v)cin >> b;
	ll ans = v[0] - 1;
	for(int i = 1;i < m;++i){
		if(v[i] >= v[i-1]){
			ans += v[i] - v[i-1];
		}
		else{
			ans += n - v[i-1] + v[i];
		}
	}
	cout << ans << endl;
}
