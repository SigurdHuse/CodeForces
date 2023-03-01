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
	int n; cin >> n;
	vector<ll> v(n+1);
	unordered_map<ll, ll> mem;
	for(int i = 1; i <= n; ++i){
		cin >> v[i];
		v[i] += v[i-1];
		mem[v[i]] += 1;
	}
	ll ans = 0;
	for(int i = 1; i <= n-1; ++i){
		mem[v[i]]--;
		if(mem.count(2*v[i])){
			if(v[n] == (v[i]*3)){
				ans += mem[2*v[i]] - (v[i] == 0);
			}
		}
	}
	cout << ans << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	
	solve();
	
}

