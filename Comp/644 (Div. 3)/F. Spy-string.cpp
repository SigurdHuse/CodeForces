#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, m; cin >> n >> m;
	vector<string> v(n);
	for(auto &s : v) cin >> s;
	string ans = v[0];
	for(int j = 0; j< m; ++j){
		char save = ans[j];
		for(char d = 'a'; d <= 'z'; d++){
			ans[j] = d;
			bool flag = 1;
			for(int z = 0; z < n; ++z){
				int cntErrors = 0;
				for(int c = 0;c<m; ++c){
					if(v[z][c] != ans[c]) cntErrors++;
				}
				if(cntErrors > 1){
					flag = 0;
					break;
				}
			}
			if(flag){
				cout << ans << endl;
				return;
			}
		}
		ans[j] = save;
	}
	cout << -1 << endl;
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

