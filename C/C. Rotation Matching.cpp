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
	vector<int> a(n), b(n), idx(n+1);
	// Would be faster to use vector
	map<int,int> cnt;
	for(auto &x : a ) cin >>x;
	for(auto &x : b) cin >> x;
	for(int i = 0; i < n; ++i){
		idx[b[i]] = i;
	}
	int ans = 1;
	for(int i = 0; i < n; ++i){
		cnt[(idx[a[i]] - i + n) % n]++;
		ans = max(ans, cnt[(idx[a[i]] - i + n) % n]);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

