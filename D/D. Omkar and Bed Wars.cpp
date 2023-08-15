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
	string s; cin >> s;
	int cnt = 0, ans = 0;
	
	while(s.size() && s[0] == s.back()){
		cnt++;
		s.pop_back();
	}
	if(s.empty()){
		if(cnt <= 2){
			cout << 0 << endl;
			return;
		}
		if(cnt == 3){
			cout << 1 << endl;
			return;
		}
		cout << (cnt + 2) / 3 << endl;
		return;
	}
	s.push_back('$');
	
	for(int i = 0; i + 1 < SZ(s); ++i){
		cnt++;
		if(s[i] != s[i+1]){
			ans += cnt / 3;
			cnt = 0;
		}
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

