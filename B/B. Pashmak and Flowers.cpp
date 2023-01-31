#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

ll foo(ll n,ll r)
{
     if(n==r) return 1;
     if(r==1) return n;
     return foo(n-1,r) + foo(n-1,r-1);
}

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	sort(all(v));
	
	if(v[0] == v[n-1]){
		cout << 0<< " " << foo(n,2) << endl;
		return;
	}
	int mi = v[0], mx = v[n-1];
	ll cnt1 = 0, cnt2 = 0;
	
	for(int i = 0; i< n; ++i){
		if(v[i] > mi) break;
		else cnt1++;
	}
	for(int i = n-1; i >= 0; --i){
		if(v[i] < mx) break;
		else cnt2++;
	}
	
	cout << mx - mi << " " << cnt1*cnt2 << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

