#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2e5 + 5;

vector<int> v[N];

void solve(){
	int n, k; cin >> n >> k;
	int ans = INT_MAX, mx = INT_MIN;
	
	int cur, moves;
	
	for(int i = 0; i < n; ++i){
		cin >> cur;
		moves = 0;
		v[cur].emplace_back(moves);
		mx = max(mx, cur);
		while(cur > 0){
			cur >>= 1;
			moves++;
			v[cur].emplace_back(moves);
		}
	}
	
	//for(int i = 0; i <= 5; ++i){
		//for(int j : v[i]) cout << j << " ";
		//cout << endl;
	//}
	
	for(int i = 0; i <= mx; ++i){
		if(SZ(v[i]) < k) continue;
		
		sort(all(v[i]));
		ans = min(ans, accumulate(v[i].begin(), v[i].begin() + k, 0));
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

