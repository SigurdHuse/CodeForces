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
	vector<int> times[4];
	vector<int> sums[4];
	for(int i = 0; i < n; ++i){
		int t, a,b;
		cin >> t >> a >> b;
		times[2*a + b].push_back(t);
	}
	for(int i = 0; i < 4; ++i){
		sort(all(times[i]));
		sums[i].push_back(0);
		for(auto it : times[i]){
			sums[i].push_back(sums[i].back() + it);
		}
	}
	int ans = INT_MAX;
	
	for(int cnt = 0; cnt < min(k+1, SZ(sums[3])); ++cnt){
		if((k - cnt < SZ(sums[1])) && (k - cnt < SZ(sums[2]))){
			ans = min(ans, sums[3][cnt] + sums[1][k-cnt] + sums[2][k - cnt]);
		}
	}
	if(ans == INT_MAX) ans = -1;
	cout << ans << "\n";
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

