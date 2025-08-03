#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int const maxn = 2e5 + 5;
int a[maxn];
ll pref[maxn], s;

void solve(){
	int n, x; cin >> n >>s >> x;
	for(int i = 1; i <= n; ++i){
		cin >> a[i];
		pref[i] = pref[i-1] + a[i];
	}
	ll ans = 0;
	map<ll, int> cnt;
	int lef = 1;
	for(int r = 1; r <= n; ++r){
		if(a[r] > x) cnt.clear(), lef = r + 1;
		else if(a[r] == x){
			while(lef <= r){
				cnt[pref[lef - 1]]++;
				lef++;
			}
		}
		ans += cnt[pref[r] - s];
	}
	cout << ans << "\n";
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

