#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// we left to mid and add gain
// we go right to mid and add gain

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	vector<pair<int,int>> pos;
	
	ll ans = 0;
	
	for(int i= 0; i < n/2; ++i){
		if(s[i] == 'L'){
			pos.push_back({n - i - 1, i});
			ans += i;
		}
		else ans += n - i - 1;
	}
	if(n & 1) ans += n/2;
	for(int i = n/2 + (n&1); i < n; ++i){
		if(s[i] == 'R'){
			pos.push_back({i, n-i-1});
			ans += n - i - 1;
		}
		else ans += i;
	}
	sort(all(pos));
	int n1 = SZ(pos), idx = n1-1;
	for(int i = 0; i < n; ++i){
		if(idx >= 0){
			ans += pos[idx].f;
			ans -= pos[idx].s;
			idx--;
		}
		cout << ans << " ";
	}
	cout << endl;
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

