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
	vector<int> v(n), mi(n), mx(n);
	for(auto &x : v) cin>> x;
	string s(n, '0');
	mi[0] = v[0];
	mx[n-1] = v[n-1]; 
	
	for(int i = 1; i < n; ++i){
		mi[i] = min(mi[i-1], v[i]);
	}
	for(int i = n-2; i >= 0; --i){
		mx[i] = max(mx[i+1], v[i]);
	}
	for(int i = 0; i < n; ++i){
		if(v[i] == mi[i] || v[i] == mx[i]) s[i] = '1';
	}
	cout << s << "\n";
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

