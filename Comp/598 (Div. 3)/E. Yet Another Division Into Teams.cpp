#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n), dp(n+1), p(n), t(n);
	vector<pair<int,int>> a;
	for(int i = 0; i< n; ++i){
		a[i].second = i;
		cin >> a[i].first;
	}
	sort(all(a));
	for(int i = 1; i<=n; ++i){
		dp[i] = INT_MAX;
		p[i] = -1;
	}
	
	for(int i = 0; i< n; ++i){
		for(int j = 3; j<= 5 && i+j <= n; ++j){
			int diff = a[i+j-1].first - a[i].first;
			if(dp[i+j] > dp[i] + diff){
				p[i+j] = i;
				dp[i+j] = dp[i] + diff;
			}
		}
	}
	int cur = n;
	int cnt = 0;
	while(cur != 0){
		for(int i = cur - 1; i >= p[cur]; --i){
			t[a[i].second] = cnt;
		}
		cnt++;
		cur = p[cur];
	}
	for(int i : t) cout << i+1 << " ";
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

