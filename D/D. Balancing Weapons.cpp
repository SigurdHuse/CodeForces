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
	vector<vector<ll>> v(n, vector<ll>(3));
	
	for(int i =0; i < n; ++i){
		cin >> v[i][1];
	}
	for(int i = 0; i < n; ++i){
		cin >> v[i][2];
		v[i][0] = v[i][1]*v[i][2];
	}
	sort(all(v));
	
	//for(int i = 0; i < n; ++i){
		//REP(j,3) cout<< v[i][j] << " ";
		//cout << endl;
	//}
	int ans = n;
	
	for(int start = 0; start < n; ++start){
		for(int end = n-1; end > start; --end){
			if(v[end][0] - v[start][0] <= k){
				bool ok = 1;
				// Check it is okay both ways
				int mi = v[start][0], mx = v[end][0]
				for(int i= end+1; i < n; ++i){
					int 
				}
				
				
				ans = min(ans, start + n-1 - end);
				break;
			}
			if(v[end][1] - v[start][0] > k){
				break;
			}
		}
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

