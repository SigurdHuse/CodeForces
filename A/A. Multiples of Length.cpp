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
	vector<ll> v(n);
	for(auto &a : v) cin >> a;
	cout << 1 << " " << n << endl;
	for(int i = 0; i < n; ++i){
		if(v[i] == 0){
			cout << 0 << " ";
		}
		else if(abs(v[i]) % n == 0){
			cout << (-1)*v[i] << " ";
			v[i] = 0;
		}
		else if(abs(v[i]) % (n-1) == 0){
			cout << 0 << " ";
		}
		else{
			if(v[i] < 0){
				ll des = -(n - (abs(v[i]) % n))*(n-1);
				cout << des - v[i] << " ";
				v[i] = des;
			}
			else{
				ll des = (n - (v[i] % n))*(n-1);
				cout << des - v[i] << " ";
				v[i] = des;
			}
		}
	}
	cout << endl;
	cout << 1 << " " << max(1ll,n-1) << endl;
	for(int i = 0; i < max(1ll,n-1); ++i){
		if(v[i] == 0) cout << 0 <<  " ";
		else{
			cout << (-1)*v[i] << " ";
			v[i] = 0;
		}
	}
	cout << endl;
	
	cout << min(n,2ll) << " " << n << endl;
	for(int i = min(n-1,1ll); i < n; ++i){
		if(v[i] == 0) cout << 0 <<  " ";
		else{
			cout << (-1)*v[i] << " ";
			v[i] = 0;
		}
	}
	cout << endl;
	//for(auto &a : v ) cout << a << " ";
	//cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

