#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n;
	string s, ans = "";
	cin >> n >> s;
	int start = 0, last_zero = n;
	while(s[start] != '1' && s[start+1]!='0' && start < n-1){
		start++;
		ans += "0";
	}
	cout << start << endl;
	for(;start < n; ++start){
		if(s[start] == '0') last_zero = start;
	}
	for(;last_zero < n; ++last_zero) ans += "1";
	if(last_zero == n) ans = s;
	cout << ans << endl;
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

