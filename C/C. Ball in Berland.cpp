#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 200005;

ll boy[N], girl[N];

void solve(){
	ll at, bt, k; cin >> at>> bt >> k;
	vector<int> a(k), b(k);
	REP(i,max(at,bt)+2){
		boy[i] = 0ll;
		girl[i] = 0ll;
	}
	
	for(auto &x : a){
		cin >> x;
		boy[x]++;
	}
	for(auto &x : b){
		cin >> x;
		girl[x]++;
	}
	if(k == 1){
		cout << 0 << endl;
		return;
	}
	ll ans = k*(k-1)/2;
	 
	for(int i = 1; i <= at; ++i){
		if(boy[i] > 1) ans -= boy[i]*(boy[i] - 1)/2;
	}
	for(int i = 1; i <= bt; ++i){
		if(girl[i] > 1) ans -= girl[i]*(girl[i] - 1)/2;
	}
	cout << ans << endl;
	
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

