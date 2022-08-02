#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, h, m; cin >> n >> h >> m;
	set<pair<int,int>> v;
	pair<int,int> cur = {h,m};
	int a, b;
	REP(i,n){
		cin >> a >> b;
		v.insert({a,b});
	}
	
	int ans = 0;
	
	while(!v.count(cur)){
		ans++;
		cur.second++;
		if(cur.second == 60){
			cur.second = 0;
			cur.first++;
		}
		if(cur.first == 24) cur.first = 0;
	}
	
	cout << ans/60 << " " << ans%60 << endl;
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

