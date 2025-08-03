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
int pref[maxn];

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	ll ans = 0;
	
	for(int i = 0; i < n; ++i){
		pref[i+1] = pref[i];
		if(s[i] == '0') pref[i+1]--;
		else pref[i+1]++;
	}
	for(int i = 1; i <= n; ++i){
		ans += (ll)i * (n - i + 1);
	}
	sort(pref, pref + n + 1);
	for(int i = 0; i < n; ++i){
		ans += (ll)pref[i] * (i - (n - i));
	}
	cout << ans / 2 << "\n";
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

