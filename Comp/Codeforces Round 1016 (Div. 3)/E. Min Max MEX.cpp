#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2e5 + 5;

int a[N];

void solve(){
	int n, k; cin >> n >> k;
	REP(i,n) cin >> a[i];
	map<int,set<int>> m;
	int ans = 0, goal = 0, cnt = 0;
	
	for(int i = 0; i < n; ++i){
		if(a[i] == goal){
			m[goal].insert(i);
			cnt++;
		}
	}
	if(cnt < k){
		cout << ans << "\n"; return;
	}
	ans++;
	cnt = 0;
	bool flag = 1;
	while(flag){
		flag = 0;
		goal = ans;
		cnt = 0;
		for(int i = 0; i < n; ++i){
			if(a[i] == goal){
				if(m[ans].size() == 0) break;
				auto it = m[ans].upper_bound(a[i]);
				if(it == m[ans].begin()) break;
				it--;
				m[ans].erase(it);
				m[goal].insert(i);
				cnt++;
			}
		}
		if(cnt >= k){
			cnt = 0;
			ans++;
			flag = 1;
		}
	}
	cout << ans << "\n";
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

