#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, m, d; cin >> n >> m >> d;
	vector<int> v(m), dp(n);
	for(auto &c : v) cin >> c;
	int pos = -1, cnt = 1;
	for(int i : v){
		if(pos + d >= n){
			break;
		}
		else{
			for(int j = 0; j < i; ++j){
				dp[pos + d+j] = cnt;
			}
			cnt ++;
			pos += i + d - 1; 
		}
	}
	if(pos + d >= n){
		cout << "YES" << endl;
		for(int i : dp) cout << i << " ";
		cout << endl;
	}
	else cout << "NO" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

