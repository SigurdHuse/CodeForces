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
	int n, m; 
	cin >> n >> m;
	int mx = (m+1)/2;
	vector<int> ans(m);
	vector<int> cnt(n+1), cur(n+1);
	vector<vector<int>> G(m);
	
	for(int i = 0; i < m; ++i){
		int k; cin >> k;
		REP(j, k){
			int f; cin >> f;
			G[i].push_back(f);
			cnt[f]++;
		}
	}
	for(int i = 0; i < m; ++i){
		bool flag = 1;
		for(int j : G[i]){
			if(cnt[j] <= mx){
				ans[i] = j;
				cur[j]++;
				flag = 0;
				break;
			}
		}
		if(flag){
			int mi = INT_MAX, next = 0;
			for(int j: G[i]){
				if(cur[j] < mi){
					next = j;
					mi = cur[j];
				}
			}
			cur[next]++;
			ans[i] = next;
		}
	}
	
	if(*max_element(all(cur)) > mx){
		cout << "NO\n";
		return;
	}
	
	cout << "YES\n";
	REP(i,m) cout << ans[i] << " ";
	cout << "\n";
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

