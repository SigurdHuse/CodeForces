#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, k; cin >> n >> k;
	vector<int> v(n), mem(n+1), tmp;
	for(auto &a : v) cin >> a;
	tmp = v;
	sort(all(tmp));
	for(int i = 0; i < k; ++i){
		mem[tmp[i]]++;
	}
	int ans = 0;
	for(int i = 0; i < k; ++i){
		if(mem[v[i]] == 0) ans++;
		else mem[v[i]]--;
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

