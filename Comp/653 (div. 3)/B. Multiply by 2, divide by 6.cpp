#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	ll n; cin >> n;
	int ans = 0;
	while(n % 6 == 0){
		ans++;
		n /= 6;
	}
	while(n % 3 == 0){
		ans += 2;
		n /= 3;
	}
	cout << (n == 1 ? ans : -1) << endl;
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

