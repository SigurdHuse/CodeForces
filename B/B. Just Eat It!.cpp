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
	
	for(auto &a : v) cin >> a;
	ll s = 0;
	
	REP(i,n){
		s += v[i];
	}
	int start = 1;
	
	ll cur = 0;
	for(int i = 0; i < n; ++i){
		cur += v[i];
		if(cur >= s){
			if((start == 1) && (i == n-1)) continue;
			cout << "NO" << endl;
			return;
		}
		if(cur <= 0){
			cur = 0;
			start = i+2;
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

