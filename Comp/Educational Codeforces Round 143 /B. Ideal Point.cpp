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
	vector<int> v(51);
	int l, r;
	// Only consider segments with k in them
	for(int i = 0; i < n; ++i){
		cin >> l >> r;
		if((l > k) || (k > r)) continue;
		for(int j = l; j <= r; ++j){
			v[j]++;
		}
	}
	
	for(int i = 0; i <= 50; ++i){
		if(i == k) continue;
		if(v[i] >= v[k]){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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

