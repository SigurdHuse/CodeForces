#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n,k; cin >> n >> k;
	vector<int> x(n), y(n), mem;
	for(auto &b : x) cin >> b;
	for(auto &b : y) cin >> b;
	sort(all(x));
	int j = n-1;
	vector<int> l(n), r(n);
	for(int i = n-1; i >= 0; --i){
		while(x[j] - x[i] > k)--j;
		r[i] = j - i + 1;
		if(i + 1 < n) r[i] = max(r[i],r[i+1]);
	}
	j = 0;
	for(int i = 0; i< n; ++i){
		while(x[i] - x[j] > k) ++j;
		l[i] = i-  j + 1;
		if(i> 0)l[i] = max(l[i],l[i-1]);
	}
	int ans = 1;
	for(int i= 0; i< n-1; ++i){
		ans = max(ans, r[i+1]+l[i]);
	}
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

