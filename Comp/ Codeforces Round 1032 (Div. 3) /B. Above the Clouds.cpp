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
	vector<bool> seen(256);
	seen[s[0]] = 1;
	seen[s[n-1]] = 1;
	for(int i = 1; i < n-1; ++i){
		char c = s[i];
		if(seen[c]){
			cout << "Yes\n"; return;
		}
		seen[c] = 1;
	}
	cout << "No\n";
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

