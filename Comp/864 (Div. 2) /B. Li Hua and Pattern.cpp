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
	
	vector<vector<int>> v(n, vector<int>(n));
	vector<vector<int>> tmp(n, vector<int>(n));
	
	REP(i,n) REP(j,n) cin >> v[i][j];
	
	int diff = 0;
	
	// Rotate 
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if(v[i][j] != v[n-1-i][n-1-j]){
				diff++;
				v[i][j] ^= 1;
			}
		}
		if(diff > k) break;
	}
	if(diff > k){
		cout << "NO" << endl;
		return;
	}
	
	// Need no center
	if((n % 2 == 0) && ((k - diff) % 2 == 1)){
		cout << "NO" << endl;
		return;
	}
	
	cout << "YES" << endl;
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

