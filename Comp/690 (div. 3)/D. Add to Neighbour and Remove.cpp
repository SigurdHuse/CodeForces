#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	ll s = accumulate(all(v),0);
	for(int i = n; i > 0; --i){
		if(s % i == 0){
			ll needsum = s/i;
			ll cursum = 0;
			bool ok = 1;
			for(int j = 0; j <n; ++j){
				cursum += v[j];
				if(cursum > needsum){
					ok = false;
					break;
				}
				else if(cursum == needsum) cursum = 0;
			}
			if(ok){
				cout << n-i << endl;
				return;
			}
		}
	}
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

