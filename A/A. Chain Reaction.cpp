#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 1e6 + 10;

void solve(){
	int n; cin >> n;
	vector<int> off(n);
	vector<int> v(n);
	for(int i = 0; i < n; ++i){
		int a,b;
		cin >> a >> b;
		off[i] = b;
		v[i] = a;
	}
	int ans = INT_MAX;
	for(int i = n-1; i >= 1; --i){
		int cur = v[i], cnt = 1;
		cur -= off[i];
		auto it = lower_bound(all(v), cur);
		if(it == v.begin()){
			ans = min(ans, n + i - 1 - cnt);
			continue;
		}
		while(it != v.end()){
			int idx = it - v.begin();
			cur = v[idx] - off[idx];
			cnt++;
			it = lower_bound(all(v), cur);
			if(it == v.begin()) break;
			it--;
		}
		ans = min(ans, n + i - 1 - cnt);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

