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
	ll n, k; cin >> n >> k;
	vector<ll> a(n), b(n);
	for(auto &x : a) cin >> x;
	bool same = 1;
	for(auto &x : b){
		cin >> x;
		if(x != -1) same = 0;
	}
	if(same){
		ll mx = *max_element(all(a));
		ll mi = *min_element(all(a));
		cout << max(0ll, k - (mx - mi) + 1) << "\n";
		return;
	}
	int x = -1;
	for(int i = 0; i < n; ++i){
		if(b[i] != -1){
			if(x == -1) x = a[i] + b[i];
			else if(a[i] + b[i] != x){
				cout << "0\n"; return;
			}	
		}
	}

	for(int i = 0; i < n; ++i){
		if(x - a[i] > k || x - a[i] < 0){
			cout << "0\n"; return;
		}
	}
	cout << "1\n";
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

