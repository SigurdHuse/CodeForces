#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// We go backwards

void solve(){
	int n, m; cin >> n >> m;
	vector<int> ans(m), a(n), c(m), idx(n+1, -1);
	vector<int> b[n+1];
	int last;
	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}
	int x, wrong = 0;
	for(int i = 0; i < n; ++i){
		cin >> x;
		idx[x] = i;
		if(a[i] != x){
			wrong++;
			b[x].push_back(i);
		}
	}
	for(auto &e : c) cin >> e;
	
	if(idx[c.back()] == -1){
		cout << "NO" << endl;
		return;
	}
	
	if(wrong == 0){
		cout << "YES" << endl;
		REP(i,m) cout << idx[c.back()] + 1 << " ";
		cout << endl;
		return;
	}
	
	
	
	last = b[c.back()].back();
	b[c.back()].pop_back();
	ans[m-1] = last;
	wrong--;
	for(int i = m-2; i>= 0; --i){
		if(wrong == 0){
			ans[i] = last;
			continue;
		}
		if((idx[c[i]] == -1) || (SZ(b[c[i]]) == 0)){
			ans[i] = last;
			continue;
		}
		last = b[c[i]].back();
		ans[i] = last;
		b[c[i]].pop_back();
		wrong--;
	}
	
	for(int i = 0; i <= n; ++i){
		if(SZ(b[i])){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
	for(int i : ans) cout << i + 1 << " ";
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

