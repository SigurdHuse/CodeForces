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
	int n, m; cin >> n >> m;
	vector<int> a(n), b(m);
	for(auto &x : a) cin >> x;
	for(auto &x : b) cin >> x;
	
	int ans = INT_MAX, tmp = 0;
	sort(all(a), greater<int>());
	for(int k = 0; k < n; ++k){
		tmp = 0;
		for(int i = 0; i < n; ++i){
			int mi = INT_MAX;
			for(int j = 0; j < m; ++j){
				//cout << a[i] <<  " " << b[j] << " " << (a[i] & b[j]) << endl;
				mi = min(tmp | (a[(i + k) % n] & b[j]), mi);
			}
			tmp = mi;
		}
		ans = min(ans, tmp);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

