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
	int n; cin >> n;
	vector<pair<int,int>> v(n);
	for(auto &[c, p] : v) cin >> c >> p;
	int k; cin >> k;
	vector<int> mx(k), idxv(n), idxmx(k);
	for(auto &x : mx) cin >> x;
	
	REP(i,n) idxv[i] = i;
	REP(i,k) idxmx[i] = i;
	
	sort(all(idxv), [&](int i, int j){return v[i].s > v[j].s;});
	sort(all(idxmx), [&](int i, int j){return mx[i] < mx[j];});
	sort(all(mx));
	sort(all(v), [&](pair<int,int> p1, pair<int,int> p2){return p1.s > p2.s;});
	
	//reverse(all(idxv));
	//reverse(all(v));
	//for(auto p : v) cout << p.f << " " << p.s << endl;
	vector<bool> used(k);
	
	int ans = 0, m = 0;
	vector<pair<int,int>> acc;
	for(int i = 0; i < n; ++i){
		auto it = upper_bound(all(mx), v[i].f);
		if(it == mx.end()){
			it--;
			if((*it) < v[i].f) continue;
		}
		int idx = it - mx.begin();
		while((idx > 0) && (mx[idx] >= v[i].f)){
			idx--;
			if(mx[idx] < v[i].f){
				idx++;
				break;
			}
		}
		while((idx < k) && (used[idx])) idx++;
		if(idx == k) continue;
		used[idx] = 1;
		ans += v[i].s;
		m++;
		acc.push_back({idxv[i], idxmx[idx]});
	}
	cout << m << " " << ans << "\n";
	for(auto p : acc){
		cout << p.f +1 << " " << p.s + 1 << "\n";
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

