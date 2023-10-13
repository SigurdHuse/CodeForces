#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

bool is_pal(string &s){
	for(int i = 0; i < SZ(s)/2; ++i){
		if(s[i] != s[SZ(s)- 1 - i]) return false;
	}
	return true;
}

void solve(){
	string s; cin >> s;
	string ans, cur;
	int n = SZ(s);
	
	
	for(int i = 0; i < n; ++i){
		cur = s[i];
		for(int j = n-1; j > i; --j){
			for(int off = 0; off < n; ++off){
				if()
			}
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

