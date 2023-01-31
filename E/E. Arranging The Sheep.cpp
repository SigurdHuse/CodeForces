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
	
	int cnt = 0;
	for(auto x : s){
		cnt += (x == '*');
	}
	
	int pos = -1;
	int cur = -1;
	for(int i = 0; i< n; ++i){
		if(s[i] == '*'){
			cur++;
			if(cur == cnt/2) pos = i;
		}
	}
	ll ans = 0;
	cur = pos - cnt/2;
	
	for(int i = 0; i < n; ++i){
		if(s[i] == '*'){
			ans += abs(cur - i);
			cur++;
		}
	}
	cout << ans<< endl;
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

