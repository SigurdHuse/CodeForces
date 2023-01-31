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
	vector<int> v(n);
	REP(i,n) cin >>v[i];
	vector<int> tmp(all(v));
	sort(all(tmp));
	
	vector<pair<int,int>> cnt(1e5 + 5);
	
	for(int i = 0; i < n; ++i){
		if(i & 1) cnt[tmp[i]].s++;
		else cnt[tmp[i]].f++;
	}
	
	for(int i =0; i < n; ++i){
		if(i & 1){
			if(cnt[v[i]].s == 0){
				cout << "NO" << endl;
				return;
			}
			cnt[v[i]].s--;
		}
		else{
			if(cnt[v[i]].f == 0){
				cout << "NO" << endl;
				return;
			}
			cnt[v[i]].f--;
		}
		
	}
	
	
	cout << "YES" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt; cin >> tt;
	while(tt--){
		solve();
	}
}

