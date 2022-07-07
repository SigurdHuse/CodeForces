#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, mx = 0; cin >> n;
	ll s; cin >> s;
	vector<int> v(n);
	//vector<ll> mem(n);
	for(auto &x : v) cin >> x;
	/*
	mem[0] = v[0];
	for(int i = 1; i <n; ++i) mem[i] += mem[i-1] + v[i];
	for(ll k: mem) cout << k <<  " ";
	*/ 
	pair<int,int> ans = {-1,-1};
	for(int i = 0; i < n;++i){
		if(v[i] > 0){
			ll cpy = s+v[i];
			int end = i;
			while(cpy >= 0 && (end < n)){
				end++;
				cpy += v[end];
			}
			if(end-i > mx){
				mx = end - i;
				ans = {i+1, end};
			}
		}
	}
	if(ans.first == -1) cout << -1 << endl;
	else cout << ans.first << " " << ans.second << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		solve();
	}
}

