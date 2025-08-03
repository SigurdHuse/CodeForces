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
	string s; cin >> s;
	int ans = SZ(s) - 1, cnt = 0;
	bool seen= 0;
	cnt = 0;
	for(int i = SZ(s) - 1; i>= 0; --i){
		if(!seen && s[i] == '0')cnt++;
		if(s[i] != '0'){
			if(seen) cnt++;
			seen = 1;
		}
	}
	ans = min(ans, cnt);
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

