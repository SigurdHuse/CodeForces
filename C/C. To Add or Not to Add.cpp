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
	vector<ll> v(n+1);
	for(int i = 1; i <= n; ++i) cin >> v[i];
	sort(v.begin()+1, v.end());
	int idx = 0, ans = 0, occ = 0;
	for(int i = 1; i <= n; ++i){
		while(v[i]*(i - idx - 1) - v[i-1] + v[idx] > k){
			//cout << i << " " << v[i]*(i - idx) - v[idx] << endl;
			idx++;
			
			//cout << i << " " << idx << endl;
		}
		if(i - idx > occ){
			occ = i - idx;
			ans = v[i];
		}
		v[i] += v[i-1];
	}
	
	cout << occ << " " << ans << "\n";
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

