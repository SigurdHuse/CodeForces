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
	int n, a, b, k; cin >> n >> a >> b >> k;
	vector<int> v(n), k_needed(n);
	for(auto &x : v) cin >> x;
	//sort(all(v));
	
	int ans = 0;
	
	for(int i = 0; i < n; ++i){
		if(v[i] <= a){
			k_needed[i] = 0;
		}
		else{
			v[i] %= b+a;
			if(v[i] == 0) v[i] += a+ b;
			k_needed[i] = ((v[i] + a - 1) / a) - 1;
		}
	}
	//for(int i : v) cout << i << " ";
	//cout << endl;
	//for(int i : k_needed) cout << i << " ";
	//cout << endl;
	sort(all(k_needed));
	for(int i = 0; i < n; ++i){
		if(k_needed[i] <= k){
			ans++;
			k -= k_needed[i];
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

