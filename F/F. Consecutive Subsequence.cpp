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
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	map<int,int> dp;
	
	int ans = 0, lst = 0;
	
	for(int i = 0; i< n; ++i){
		int x = a[i];
		dp[x] = dp[x-1] + 1;
		if(ans < dp[x]){
			ans = dp[x];
			lst = x;
		}
	}
	vector<int> res;
	for(int i = n-1; i >= 0; --i){
		if(a[i] == lst){
			res.push_back(i);
			--lst;
		}
	}
	reverse(all(res));
	cout << ans << "\n";
	for(auto it : res)cout << it+1 << " ";
	cout << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

