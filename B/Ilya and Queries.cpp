#include <bits/stdc++.h>
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++)  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int n = (int)s.size(), l, r, m, k = 0;
	cin >> m;
	vector<int> dp(n);
	for(int i = 1; i< n;++i){
		k += (s[i] == s[i-1]);
		dp[i] = k;
	}
	REP(i, m){
		cin >> l >> r;
		l--;
		r--;
		cout << dp[r] - dp[l]<< endl;
	}
	//for(int i : dp) cout << i<< " ";
}
