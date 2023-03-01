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
	int n, m; cin >> n >> m;
	vector<vector<int>> a(n+1, vector<int>(1 << n));
	for(auto &x : a[0]) cin >> x;
	for(int i = 1; i < n+1; ++i){
		if(i & 1){
			for(int k = 0, j = 0; j < (1 << (n -i + 1)); j += 2, k++){
				a[i][k] = (a[i-1][j] | a[i-1][j+1]);
			}
		}
		else{
			for(int k = 0, j = 0; j < (1 << (n -i + 1)); j += 2, k++){
				a[i][k] = (a[i-1][j] ^ a[i-1][j+1]);
			}
		}
	}
	int p, b;
	while(m--){
		cin >> p >> b;
		p--;
		a[0][p] = b;
		for(int i = 1; i < n+1; ++i){
			if(p & 1){
				if(i & 1) a[i][p/2] = (a[i-1][p-1] | a[i-1][p]);
				else a[i][p/2] = (a[i-1][p-1] ^ a[i-1][p]);
			}
			else{
				if(i & 1) a[i][p/2] = (a[i-1][p+1] | a[i-1][p]);
				else a[i][p/2] = (a[i-1][p+1] ^ a[i-1][p]);
			}
			p /= 2;
		}
		cout << a[n][0] << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

