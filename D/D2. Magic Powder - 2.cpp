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
	vector<vector<ll>> v(n, vector<ll>(3));
	ll total = 0;
	for(int i = 0; i < n; ++i){
		cin >> v[i][0];
		total += v[i][0];
	}
	for(int i = 0; i < n; ++i){
		cin >> v[i][1];
		v[i][2] = v[i][1] / v[i][0];
	}
	sort(all(v), [&](vector<ll> v1, vector<ll>v2){return v1[2] < v2[2];});
	
	//for(auto &x : v){
	//	for(auto &e : x) cout << e << " ";
	//	cout << "\n";
	//}
	ll cur = v[0][0], ans = v[0][2], mi = v[0][2];
	
	ll off = v[0][1] - v[0][2]*v[0][0];
	
	for(int i = 1; i < n; ++i){
		if(v[i][2] > mi){
			k += off;
			off = 0;
			if(k <= cur*(v[i][2] - mi)){
				ans += k/cur;
				k = 0;
				break;
			}
			k -= cur*(v[i][2] - mi);
			mi = v[i][2];
			ans = v[i][2];
			
			cur += v[i][0];
			off += v[i][1] - v[i][2]*v[i][0];
		}
		else{
			cur += v[i][0];
			off += v[i][1] - v[i][2]*v[i][0];
		}
	}
	k += off;
	ans += k / total;
	cout << ans << "\n";
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

