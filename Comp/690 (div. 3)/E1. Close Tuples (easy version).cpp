#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

vector<int> fac(19);
void fill_fac(){
	fac[0] = 1;
	for(int i = 1;i < 19; ++i) fac[i] = fac[i-1]*i;
}


void solve(){
	int n, x; cin >> n;
	vector<ll> cnt(n+1);
	for(int i = 0; i <n; ++i){
		cin >> x;
		cnt[x]++;
	}
	ll ans = 0;
	for (int i = 2; i < n; i++) {
    ans += cnt[i - 1] * cnt[i] * cnt[i + 1];
  }
  for (int i = 1; i < n; i++) {
    ans += cnt[i] * (cnt[i] - 1) / 2 * cnt[i + 1];
  }
  for (int i = 2; i <= n; i++) {
    ans += cnt[i - 1] * cnt[i] * (cnt[i] - 1) / 2;
  }
  for (int i = 2; i < n; i++) {
    ans += cnt[i - 1] * cnt[i + 1] * (cnt[i + 1] - 1) / 2;
  }
  for (int i = 2; i < n; i++) {
    ans += cnt[i + 1] * cnt[i - 1] * (cnt[i - 1] - 1) / 2;
  }
  for (int i = 1; i <= n; i++) {
    ans += cnt[i] * (cnt[i] - 1) * (cnt[i] - 2) / 6;
  }
	cout << ans << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	fill_fac();
	while(tt--){
		solve();
	}
}

