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
	int q, m; cin >> q;
	char c;
	
	while(q--){
		cin >> m >> c;
		
		int l = 0, cnt = 0, ans = 0;
		for(int r = 0; r < n; ++r){
			if(s[r] != c) cnt++;
			
			while(cnt > m){
				if(s[l] != c) cnt--;
				l++;
			}
			ans = max(ans, r - l + 1);
		}
		cout << ans << "\n";
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

