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
	int n = SZ(s);
	
	if(n == 1){
		if(s == "^") cout << 1 << endl;
		else cout << 2 <<endl;
		return;
	}
	
	s += "_";
	int ans = (s[0] == '_');
	for(int i = 0; i < n; ++i){
		if(s[i] == '_' && s[i+1] == '_') ans++;
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

