#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

bool pick(int i, vector<int> &v, int l, int r){
	if(i == l || i == r) return 0;
	return v[i-1] < v[i] && v[i] > v[i+1];
}

void solve(){
	int n, k; cin >> n >> k;
	vector<int> v(n);
	vector<bool> peak(n);
	
	for(auto &x : v) cin >> x;
	
	int ans = -1, l = -1, r = -1, now = 0;
	
	for(int i = 1; i + 1 < k; ++i){
		if(pick(i,v,0,k-1)) ++now;
	}
	ans = now+1, l = 0, r = k-1;
	
	for(int i = k; i < n; ++i){
		if(pick(i-k+1, v, i-k,i-1)) --now;
		if(pick(i-1, v, i-k+1, i)) ++now;
		if(now + 1> ans){
			ans = now+1;
			l = i - k + 1;
			r = i;
		}
	}
	cout << ans << " " << l + 1 << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt; cin >> tt;
	while(tt--){
		solve();
	}
}

