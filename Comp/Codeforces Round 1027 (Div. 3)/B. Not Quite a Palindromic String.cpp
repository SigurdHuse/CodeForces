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
	int zero = 0, one = 0;
	for(int i = 0; i < n; ++i){
		if(s[i] == '0') zero++;
		else one++;
	}
	if(abs(one - zero) / 2 > k){
		cout << "NO\n";
		return;
	}
	k -= abs(one - zero) / 2;
	
	if(one > zero) one -= abs(one - zero) / 2 * 2;
	else zero -= abs(one - zero) / 2 * 2;
	
	if(k % 2 == 0) cout << "YES\n";
	else cout << "NO\n";
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

