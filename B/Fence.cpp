#include <bits/stdc++.h>
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++)  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,k;
	ll ans = 1, tmp = 0, cnt;
	cin >> n >> k;
	vector<int> v(n);
	for(auto &b : v) cin >> b;
	for(int i = 0; i< k; ++i) tmp += v[i];
	cnt = tmp;
	for(int i = k; i< n; ++i){
		tmp += v[i]; 
		tmp -= v[i-k];
		if(tmp < cnt){
			ans = i - k + 2;
			cnt = tmp;
		}
	}
	cout << ans << endl;
}
