#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	ll n; cin >> n;
	ll min = 0, max = 0, cpy = n;
	if(n % 2 || n < 4){
		cout << -1 << endl;
		return;
	}
	while(cpy % 4 != 0 && cpy > 0){
		cpy -= 6;
		max++;
	}
	max += cpy / 4;
	while(n % 6 != 0 && n > 0){
		min++;
		n -= 4;
	}
	min += n / 6;
	cout << min <<" " << max << endl;
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

