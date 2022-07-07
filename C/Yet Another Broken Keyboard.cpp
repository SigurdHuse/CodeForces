#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	ll n, k, cnt = 0, ans = 0;
	string s;
	char c;
	cin >> n >> k >> s;
	vector<char> mem(26);
	REP(i,k){
		cin >> c;
		mem[c - 'a'] = 1;
	}
	for(int i = 0; i< n; ++i){
		if(mem[s[i] - 'a']) cnt++;
		else{
			ans += cnt*(cnt + 1)/2;
			cnt = 0;
		}
	}
	ans += cnt*(cnt + 1)/2;
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

