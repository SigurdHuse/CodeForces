#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, k; cin >> n >>k;
	vector<int> v(n);
	map<int,int> mem;
	for(auto &a : v){
		cin >> a;
		mem[a]++;
	}
	int l = 0, r = 0;
	pair<int,int> ans = {-1,-1};
	sort(all(v));
	v.insert(v.begin(),v[0]-1);
	for(int i = 1; i < n+1; ++i){
		if(mem[v[i]] >= k && (v[i] - v[i-1] < 2)){
			if(l == 0) l = v[i];
			else r = v[i];
		}
		else{
			if(r != 0 && r - l > ans.second - ans.first){
				ans.second = r;
				ans.first = l;
			}
			l = 0;
			r = 0;
		}
	}
	if(r != 0 && r - l > ans.second - ans.first){
		ans.second = r;
		ans.first = l;
	}
	if(ans.first == -1 && ans.second == -1){
		cout << -1 << endl;
	}
	else cout << ans.first << " " << ans.second << endl;
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

