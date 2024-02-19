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
	ll n, m; cin >> n >> m;
	vector<int> v(n);
	int l = 0, r = n-1;
	
	for(auto &x : v){
		cin >> x;
	}
	
	string s; cin >> s;
	for(int i = 0; i < n; ++i){
		if(s[i] == 'L') l++;
		else r--;
	}
	vector<int> tmp(n);
	ll ans = 1;
	
	for(int i = n-1; i >= 0; --i){
		if(s[i] == 'L'){
			l--;
			ans = ans*v[l] % m;
			tmp[i] = ans;
		}
		else{
			r++;
			ans = ans * v[r] % m;
			tmp[i] = ans;
		}
	}
	for(auto &x : tmp) cout << x << " ";
	cout << "\n";
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

