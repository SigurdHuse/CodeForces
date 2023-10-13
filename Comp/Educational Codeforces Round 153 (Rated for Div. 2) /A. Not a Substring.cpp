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
	if(s == "()"){
		cout << "NO\n";
		return;
	}
	// Generate ()
	string test = "";
	bool flag = 0;
	for(int i = 0; i < n; ++i){
		test += "(";
		if(test == s){
			flag = 1;
			break;
		}
		test += ")";
		if(test == s){
			flag = 1;
			break;
		}
	}
	test = "";
	for(int i = 0; i < n; ++i){
		test += ")";
		if(test == s){
			flag = 1;
			break;
		}
		test += "(";
		if(test == s){
			flag = 1;
			break;
		}
	}
	if(flag){
		string ans(n, '(');
		REP(i,n) ans += ")";
		cout << "YES\n" << ans << "\n";
	}
	else{
		string ans = "";
		REP(i,n){
			ans += "()";
		}
		cout << "YES\n" << ans << "\n";
	}
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

