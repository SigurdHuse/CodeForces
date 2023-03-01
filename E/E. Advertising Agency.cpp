#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int cnt[1005], v[1005];

const int M = 1e9 + 7;

int ncr[1005][1005];

void fill(){
	for(int i = 0; i < 1005; ++i){
		ncr[i][0] = 1;
		for(int j = 1; j <= i; ++j){
			ncr[i][j] = (ncr[i-1][j-1] + ncr[i-1][j])%M;
		}
	}
}

void solve(){
	memset(cnt, 0, sizeof(cnt));
	int n, k; cin >> n >> k;
	for(int i = 0; i < n; ++i){
		cin >> v[i];
		cnt[v[i]]++;
	}
	int ans = 1;
	sort(v, v+n, greater<int>());
	
	for(int i = 0; i < k; ++i){
		if(cnt[v[i]] != 1){
			ans *= ncr[cnt[v[i]]][min(cnt[v[i]], k - i)];
			ans %= M;
			cnt[v[i]] = 1;
		}
	}
	cout << ans << endl;
	
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	fill();
	while(tt--){
		solve();
	}
}

