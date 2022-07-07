#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, ans = 0; cin >> n;
	vector<int> a(n);
	for(auto &x : a) cin >> x;
	while(!equal(a.begin()+1,a.end(),a.begin())){
		int tmp = a[0];
		for(int i = 0; i< n-1;++i){
			a[i] = __gcd(a[i], a[i+1]);
		}
		a[n-1] = __gcd(a[n-1], tmp);
		ans ++;
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

