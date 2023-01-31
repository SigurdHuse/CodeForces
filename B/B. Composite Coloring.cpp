#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int res[1007];
vector<int> ans[1007];

void solve(){
	int n; cin >> n;
	
	
	auto f = [&](int u){
		for(int i= 2; i <= u; ++i){
			if(u % i == 0) return i;
		}
	};
	int u;
	for (int i=1;i<=1000;++i) ans[i].clear();
	for(int i = 1; i<=n; ++i){
		cin >> u;
		ans[f(u)].push_back(i);
	}
	int ret = 0;
	
	for(int i = 1; i <= 1000; ++i){
		if(ans[i].size()){
			++ret;
			for(auto c : ans[i]){
				res[c] = ret;
			}
		}
	}
	cout << ret << endl;
	for(int i = 1; i<= n; ++i){
		cout << res[i] << " ";
	}
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

