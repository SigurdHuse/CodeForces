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
	int l, r; cin >> l >> r;
	int ans = -1, num;
	
	for(int i = l; i <= r; ++i){
		int tmp = i;
		int mx = 0, mi = 10;
		while(tmp > 0){
			mx = max(mx, tmp % 10);
			mi = min(mi, tmp % 10);
			tmp /= 10;
		}
		if(mx - mi > ans){
			ans = mx-mi;
			num = i;
		}
		if(ans == 9) break;
	}
	cout << num << endl;
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

