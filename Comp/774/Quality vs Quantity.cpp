#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n;
	cin >> n;
	vector<ll> v(n);
	for(auto &x : v) cin >> x;
	sort(v.begin(),v.end());
	ll cnt1 = v[0] + v[1], cnt2 = v[n-1];
	int l = 1, r = n-1;
	while(cnt1 >= cnt2 && l < r){
		l++;
		if(l == r) break;
		r --;
		if(l == r) break;
		cnt1 += v[l];
		cnt2 += v[r];
	}
	cout << (cnt2 > cnt1 ? "YES" : "NO") << endl;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		solve();
	}
}

