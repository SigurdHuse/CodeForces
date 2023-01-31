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
	vector<int> v(n), w(k);
	
	for(auto &a : v) cin >> a;
	for(auto &a : w) cin >> a;
	
	ll ans = 0;
	sort(all(v));
	sort(all(w));
	int l = 0, r = n-1;
	int j = k -1;
	
	for(int i = 0; (i < k) && (i <= j);){
		//cout << w[j] << endl;
		if(w[i] == 1){
			ans += 2*v[r];
			r--;
			i++;
		}
		else{
			ans += v[r] + v[l];
			r--;
			l += w[j] - 1;
			j--;
		}
	}
	cout << ans << endl;
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

