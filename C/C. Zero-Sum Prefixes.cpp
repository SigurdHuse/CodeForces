#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2e5 + 5;

ll a[N];

void solve(){
	int n; cin >> n;
	map<ll,ll> freq;
	ll maxfr = 0, current_sum = 0, ans = 0;
	bool found_wildcard = 0;
	for(int i = 0; i < n; ++i){
		cin >> a[i];
		if(a[i] == 0){
			if(found_wildcard) ans += maxfr;
			else ans += freq[0];
			
			found_wildcard = 1;
			maxfr = 0, freq.clear();
		}
		current_sum += a[i];
		maxfr = max(maxfr, ++freq[current_sum]);
	}
	if(found_wildcard) ans += maxfr;
	else ans += freq[0];
	
	cout << ans << "\n";
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	a[0] = 0;
	while(tt--){
		solve();
	}
}

