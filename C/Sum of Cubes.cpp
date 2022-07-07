#include <bits/stdc++.h> 
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++) 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	ll x;
	bool possible = 0;
	unordered_set<ll> cubes;
	for(ll a = 1; a*a*a < 1e12;++a) cubes.insert(a*a*a);
	unordered_map<ll,bool> mem1;
	//for(ll a : mem) cout << a << endl;
	while(tt--){
		cin >> x;
		possible = 0;
		for(ll a = 1; a*a*a < x; ++a){
			if(cubes.count(x - a*a*a)){
				possible = 1;
				break;
			}
		}
		cout << (possible ? "YES" : "NO") << endl;
	}
}
