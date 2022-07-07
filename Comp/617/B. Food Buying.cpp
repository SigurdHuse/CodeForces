#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int s, ans = 0;
	cin >> s;
	while(s > 9){
		//cout << s << endl;
		int tmp = s / 10, m = s % 10;
		s = m + tmp;
		tmp *= 10;
		ans += tmp;
	}
	ans += s;
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

