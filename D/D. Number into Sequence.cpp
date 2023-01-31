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
	ll n; cin >> n;
	
	map<ll,ll> facs;
	
	for(ll i = 2; i*i <= n; ++i){
		while(n % i == 0){
			facs[i]++;
			n /= i;
		}
		if(n == 1) break;
	}
	if(n != 1) facs[n]++;
	int cnt = 0;
	ll mx = -1, left = -1;
	
	for(auto p : facs){
		if(p.s > cnt){
			cnt = p.s;
			mx = p.f;
			left = mx;
		}
	}
	//for(auto p : facs) cout<< p.f << " " << p.s << endl;
	for(auto p : facs){
		if(p.f != mx){
			REP(i,p.s)left *= p.f;
		}
	}
	cout << cnt << endl;
	
	for(int i = 1; i < cnt; ++i) cout << mx << " ";
	cout << left << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt; cin >> tt;
	while(tt--){
		solve();
	}
}

