#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

vector<int> v;

bool myfunc(int i, int j){
	return v[i] < v[j];
}

void solve(){
	int n, m, d; cin >> n >> m >> d;
	v.resize(n);
	vector<int> idx(n);
	vector<int> ans(n, -1);
	
	multiset<pair<int,int>> mem;
	
	for(int i = 0; i < n; ++i){
		cin >> v[i];
		idx[i] = i;
		mem.insert({v[i], i});
	}
	sort(all(idx), myfunc);
	sort(all(v));
	
	int day = 1;
	for(int i = 0; i < n; ++i){
		if(ans[idx[i]] != -1) continue;
		ans[idx[i]] = day;
		
		int cur = v[i];
	
		while(cur <= m){
			auto it = mem.upper_bound({cur + d, INT_MAX});
			if(it == mem.end()) break;
			cur = it->f;
			ans[it->s] = day;
			mem.erase(it);
		}
		day++;
	}
	cout << day - 1 << endl;
	for(int i : ans) cout << i << " ";
	cout << endl; 
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

