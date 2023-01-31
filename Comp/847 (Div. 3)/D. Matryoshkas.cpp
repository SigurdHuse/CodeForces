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
	unordered_map<int,int> mem;
	int n; cin >> n;
	vector<int> v(n);
	for(auto &a : v){
		cin >> a;
		mem[a]++;
	}
	sort(all(v));
	int ans = 0;
	for(int i = 0; i < n; ++i){
		if(mem[v[i]] == 0) continue;
		ans++;
		int tmp = v[i]+1;
		mem[v[i]]--;
		
		while(mem.count(tmp)){
			if(mem[tmp] == 0) break;
			mem[tmp]--;
			tmp++;
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

