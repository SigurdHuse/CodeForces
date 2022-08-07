#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	
	int mx = *max_element(all(v));
	int cnt = count(all(v), mx);
	int idx = 0;
	for(;idx < n-1; ++idx){
		if(v[idx] == mx) break;
		if(v[idx] > v[idx+1]){
			cout << "NO" << endl;
			return;
		}
	}
	int tmp = idx;
	for(;idx < tmp + cnt - 1; ++idx){
		if(v[idx] != mx){
			cout << "NO" << endl;
			return;
		}
	}
	for(;idx < n-1; ++idx){
		if(v[idx] < v[idx+1]){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
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

