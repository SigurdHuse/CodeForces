#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, x, y; cin >> n >> x >> y;
	vector<int> a(n), ans(n, INT_MAX);
	for(int start = 1; start < 51;start++){
		for(int d = 1; d < 51; ++d){
			for(int j = 0; j < n; ++j){
				a[j] = start + d*j;
			}
			if(*find(all(a),x) == x && *find(all(a),y) == y){
				if(ans[n-1] > a[n-1]){
					copy(all(a),ans.begin());
				}
			}
		}
	}
	for(int i : ans) cout << i << " ";
	cout << endl;
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

