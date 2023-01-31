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
	int n,q; cin >> n >> q;
	vector<ll> v(n), cnt(n);
	vector<pair<ll,ll>> ps(q);
	for(auto &x : v) cin >> x;
	for(auto &[l,r] : ps){
		cin >> l >> r;
		l--;r--;
	}
	
	sort(all(ps));
	sort(all(v), greater<ll>());
	
	//for(auto p : ps) cout << p.f << " " << p.s << endl;
	
	int cur = 1;
	
	int i = ps[0].f;
	priority_queue<int, vector<int>, greater<int>> qu;
	qu.push(ps[0].s);
	
	int idx = 1;
	for(; i < n; ++i){
		while((idx < q) && (i >= ps[idx].f)){
			cur++;
			qu.push(ps[idx].s);
			idx++;
		}
		cnt[i] = cur;
		while((qu.size()) && (i == qu.top())){
			cur--;
			qu.pop();
		}
	}
	//while(start < n){
		//cnt[start] = cur;
		//if((qu.size()) && (start = qu.top())){
			//cur--;
			//qu.pop();
		//}
		//start++;
	//}
	sort(all(cnt), greater<int>());
	//for(int j : cnt) cout << j << " ";
	//cout << endl;
	ll ans = 0;
	for(int j =0; j < n; ++j){
		ans += cnt[j] * v[j];
	}
	cout << ans << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

