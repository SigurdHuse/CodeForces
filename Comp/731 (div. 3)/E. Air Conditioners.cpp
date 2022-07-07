#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, k; cin >> n >> k;
	vector<int> ans(n, INT_MAX), a(k), t(k);
	for(auto &x : a) cin >> x;
	for(auto &x : t) cin >> x;
	for(int i= 0; i <k;i++) a[i]--;
	vector<ll> c(n,INT_MAX), L(n,INT_MAX), R(n,INT_MAX);
	ll p = INT_MAX;
	REP(i,k) c[a[i]] = t[i];
	REP(i,n){
		p = min(p+1,c[i]);
		L[i] = p;
	}
	p = INT_MAX;
	for(int i = n-1;i > -1;--i){
		p = min(p+1,c[i]);
		R[i] = p;
	}
	
	REP(i,n) cout << min(L[i],R[i]) << " ";
	cout << endl;
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

