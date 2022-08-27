#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, q; cin >> n >> q;
	vector<int> v(n), wins(n+1);
	int indx_mx;
	for(int i = 0; i< n; ++i){
		if(v[i] == n){
			indx_mx = i;
			break;
		}
	}
	
	int cur_mx = v[0];
	for(int i = 1; i < n; ++i){
		cur_mx = max(v[i], cur_mx);
		wins[cur_mx]++;
		if(cur_mx == n) break;
	}
	for(auto &a : v) cin >> a;
	REP(i,q){
		int j, k; cin >> j >> k;
		int cur = v[j-1];
		if(cur == n){
			cout <<  max(0,k - indx_mx - 1) << endl;
			continue;
		}
		else{
			if(k >= j-1){
				if(k >= j - 1 + wins[cur]) cout << wins[cur] << endl;
				else cout << wins[cur] - (k - j - 1) << endl;
			}
			else cout << 0 << endl;
		}
	}
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

