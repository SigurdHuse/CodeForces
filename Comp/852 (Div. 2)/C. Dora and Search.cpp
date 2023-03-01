#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n), idx(n+1);
	idx[0] = INT_MIN;
	for(auto &a : v) cin >> a;
	int l = -1, r = -1;
	
	for(int i = 0; i < n; ++i) idx[v[i]] = i;
	
	for(int i = 0; i < n; ++i){
		if(idx[v[i]- 1] < i) continue;
		if(n - i <= r - l) continue;
		int mi = v[i], mx = v[i];
		for(int j = i+1; j < n; ++j){
			mi = min(mi, v[j]);
			mx = max(mx, v[j]);
			if((v[i] != mi) && (v[i] != mx) && (v[j] != mi) && (v[j] != mx)){
				if(j - i > r - l){
					r = j;
					l = i;
				}
			}
		}
	}
	if((l == -1) && (r == -1)){
		cout << -1 << endl;
		return;
	}
	cout << l + 1 << " " << r + 1 << endl;
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

