#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n; cin >> n;
	bool possible = 0;
	string s, test; cin >> s;
	if(s[0]=='2' && s[1] == '0' && s[2] == '2' && s[3] == '0') possible = 1;
	if(s[0]=='2' && s[1] == '0' && s[2] == '2' && s[n-1] == '0') possible = 1;
	if(s[0]=='2' && s[1] == '0' && s[n-2] == '2' && s[n-1] == '0') possible = 1;
	if(s[0]=='2' && s[n-3] == '0' && s[n-2] == '2' && s[n-1] == '0') possible = 1;
	if(s[n-4]=='2' && s[n-3] == '0' && s[n-2] == '2' && s[n-1] == '0') possible = 1;
	cout << (possible ? "YES": "NO") << endl;
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

