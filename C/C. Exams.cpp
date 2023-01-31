#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

bool myfunc(pair<int,int> p1, pair<int,int> p2){
	if(p1.f == p2.f) return p1.s < p2.s;
	return 0;
}

void solve(){
	int n; cin >> n;
	vector<pair<int,int>> v(n);
	for(auto &[a,b] : v) cin >> a >> b;
	
	sort(all(v));
	int last = 0;
	
	for(int i = 0; i < n; ++i){
		if(v[i].s >= last) last = v[i].s;
		else last = v[i].f;
	}
	cout << last << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

