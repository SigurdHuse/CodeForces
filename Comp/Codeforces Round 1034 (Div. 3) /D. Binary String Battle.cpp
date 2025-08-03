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
	int n, k; cin >> n >> k;
	string s; cin >> s;
	int one = 0, zero = 0;
	for(int i = 0; i < n; ++i){
		if(s[i] == '1') one++;
		else zero++;
	}
	if(one <= k){
		cout << "Alice\n"; return;
	}
	
	if(n >= 2*k){
		cout << "Bob\n"; return;
	}
	else cout << "Alice\n";
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

