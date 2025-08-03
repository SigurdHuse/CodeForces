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
	vector<int> v(n);
	vector<int> cnt(60);
	for(auto &x : v){
		cin >> x; cnt[x]++;
	}
	sort(all(v));
	int ans = accumulate(all(v), 0);
	
	while(cnt[0] > 0){
		if(cnt[1] > 0){
			ans += 1;
			cnt[1]--;
			cnt[0]--;
		}
		else{
			ans++;
			cnt[0]--;
		}
	}
	cout << ans << "\n";
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

