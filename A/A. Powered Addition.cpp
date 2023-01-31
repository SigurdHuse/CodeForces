#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

vector<int> powers(31);

void fill_powers(){
	for(int i = 0; i < 31; ++i) powers[i] = (1 << i);
}

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	
	for(auto &a : v) cin >> a;
	
	int ans = 0;
	
	for(int i = 1; i < n; ++i){
		int diff = v[i-1] - v[i];
		if(diff <= 0) continue;
		v[i] = v[i-1];
		int idx = upper_bound(all(powers),diff)-powers.begin();
		ans = max(ans, idx);
	}
	//for(int i : v) cout << i << " ";
	//cout << endl;
	cout << ans << endl;
	
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	fill_powers();
	while(tt--){
		solve();
	}
}

