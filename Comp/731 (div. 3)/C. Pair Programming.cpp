#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, m, k; cin >> k >> n >> m;
	vector<int> a(n), b(m), ans(n+m);
	for(auto &x : a) cin >> x;
	for(auto &x : b) cin >> x;
	int ind1 = 0, ind2 = 0;
	while(ind1 < n || ind2 < m){
		if(a[ind1] == 0 && ind1 < n){
			ans[ind1 + ind2] = 0;
			k++;
			ind1++;
		}
		else if(b[ind2] == 0 && ind2 <m){
			ans[ind1 + ind2] = 0;
			k++;
			ind2++;
		}
		else if(a[ind1] <= k && ind1 < n){
			ans[ind1 + ind2] = a[ind1];
			ind1++;
		}
		else if(b[ind2] <= k && ind2 < m){
			ans[ind1 + ind2] = b[ind2];
			ind2++;
		}
		else{
			cout << -1 << endl;
			return;
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

