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
	vector<ll> prefix(n + 1, 0);

	for(int i = 0; i < n; ++i){
		int x; cin >> x;
		prefix[i+1] = prefix[i] + x;
	}
	
	int begin = 0, end = 0;
	ll ans = 0;
	set<ll> s= {0};
	
	while(begin < n){
		while(end < n && !s.count(prefix[end + 1])){
			++end;
			s.insert(prefix[end]);
		}
		ans += end - begin;
		s.erase(prefix[begin]);
		++begin;
	}
	
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

