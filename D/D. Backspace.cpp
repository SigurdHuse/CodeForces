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
	string s, t; cin >> s >> t;
	int n1 = SZ(s), n2 = SZ(t);
	if(n2 > n1){
		cout << "NO" << endl;
		return;
	}
	int cur = 0;
	for(int i = 0; i < n1; ++i){
		if(s[i] == t[cur]){
			cur++;
		}
		if(cur == n2) break;
	}
	
	cout << (cur == n2 ? "YES" : "NO") << endl;
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

