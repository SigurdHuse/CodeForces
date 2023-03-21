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
	int n, k; cin >> n >> k;
	
	vector<int> v(n), cnt(2*k + 1);
	REP(i,n) cin >> v[i];
	
	for(int i = 0; i < n/2; ++i){
		++cnt[v[i] + v[n-1-i]];
	}
	
	vector<int> pref(2*k + 2);
	
	for(int i = 0; i < n/2; ++i){
		int l1 = 1 + v[i], r1 = k+ v[i];
		int l2 = 1 + v[n-1-i], r2 = k + v[n-1-i];
		
		assert(max(l1,l2) <= min(r1,r2));
		++pref[min(l1,l2)];
		--pref[max(r1,r2)+ 1];
	}
	for(int i = 1; i <= 2*k + 1; ++i){
		pref[i] += pref[i-1];
	}
	int ans = INT_MAX;
	
	for(int sum = 2; sum <= 2*k; ++sum){
		ans = min(ans, (pref[sum] - cnt[sum]) + (n/2 - pref[sum])*2);
	}
	
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt; cin >> tt;
	while(tt--){
		solve();
	}
}

