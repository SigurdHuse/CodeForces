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
	short n, ans = 0; cin >> n;
	vector<short> v(n);
	map<short, short> mem;
	for(auto &a : v){
		cin >> a;
		mem[a]++;
	}
	
	for(short i = 0; i < n; ++i){
		short cur = v[i];
		for(short j = i+1; j < n; ++j){
			cur += v[j];
			if(cur > 8000) break;
			auto it = mem.find(cur);
			if(it != mem.end()){
				ans += it->second;
				mem.erase(it);
			}
		}
	}
	cout << ans << endl;
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

