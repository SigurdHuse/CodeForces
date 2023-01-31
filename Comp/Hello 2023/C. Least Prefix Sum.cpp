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
	vector<ll> v(n);
	vector<ll> pref(n);
	for(auto &a : v) cin>> a;
	
	int ans = 0;
	if(v[m-1] > 0){
		v[m-1] *= -1;
		ans++;
	}
	
	pref[0] = v[0];
	for(int i = 1; i < n; ++i){
		pref[i] += pref[i-1] + v[i];
	}
	ll off = 0, m_off = 0;
	//for(auto j : pref) cout << j << " ";
	//cout << endl;
	set<ll> seen;
	if(n == 1){
		cout << 0 << endl;
		return;
	}
	
	for(int i = m-2; i >= 0; --i){
		while(pref[i] <= pref[m-1] - m_off){
			auto it = seen.rbegin();
			m_off += 2*(*it);
			//cout << m_off << endl;
			seen.erase((*it));
			ans++;
		}
		seen.insert(v[i]);
	}
	seen.clear();
	for(int i = m; i < n; ++i){
		seen.insert(v[i]);
		while(pref[i] + off <= pref[m-1]){
			//cout << i << endl;
			auto it = seen.begin();
			off -= 2*(*it);
			seen.erase((*it));
			ans++;
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

