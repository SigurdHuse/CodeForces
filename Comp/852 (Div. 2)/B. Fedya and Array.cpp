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
	int x, y; cin >> x >> y;
	vector<int> ans;
	
	int cur = x;
	ans.emplace_back(cur);
	cur--;
	while(cur > y){
		ans.emplace_back(cur);
		cur--;
	}
	ans.emplace_back(y);
	cur++;
	while(cur < x){
		ans.emplace_back(cur);
		cur++;
	}

	cout << SZ(ans) << endl;
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

