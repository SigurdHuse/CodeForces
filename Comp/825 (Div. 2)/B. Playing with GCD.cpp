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
	for(auto &a : v ) cin >> a;
	int cur = v[0];
	bool ok = 0;
	for(int i = 1; i< n; ++i){
		ok = 0;
		for(int j = v[i]; j > 0; --j){
			if(__gcd(j, cur) == v[i]){
				ok = 1;
				cur = j;
				break;
			}
		}
		if(!ok){
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

