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
	string s; cin >>s;
	int n = SZ(s);
	int ans = 1;
	map<string, int> m;
	
	for(int i = 0; i < n; ++i){
		string cur(1,s[i]);
		if(m.count(cur)) m[cur]++;
		else m[cur] = 1;
		ans = max(ans, m[cur]);
		for(int off = 1; off <= n; ++off){
			cur = s[i];
			for(int j = i+off; j < n; j+=off){
				cur += s[j];
				if(m.count(cur)) m[cur]++;
				else m[cur] = 1;
				ans = max(ans, m[cur]);
			}
		}
	}
	//for(auto p : m){
	//	cout << p.f << " " << p.s << endl;
	//}
	cout << ans << "\n";
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

