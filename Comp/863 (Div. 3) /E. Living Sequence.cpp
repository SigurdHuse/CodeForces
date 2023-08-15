#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

ll dp[15];

void fill_dp(){	
	dp[0] = 0; dp[1] = 1;
	for(int i = 2; i < 15; ++i){
		dp[i] = dp[i-1]*9ll + ceil(pow(10, i-1));
	}
}

void solve(){
	ll k; cin >> k;
	ll power = ceil(pow(10,12));
	int cur = 12;
	ll ans = k;
	while(k >= 10){
		ll digit = k / power;
		
		if(digit > 4){
			ans += (digit - 1)*dp[cur] + power;
		}
		else if(digit == 4){
			ans += digit * dp[cur] + (k % power) + 1;
			break;
		}
		else{
			ans += digit * dp[cur];
		}
		
		k %= power;
		power /= 10;
		cur--;
	}
	
	if(k >= 4){
		ans++;
	}
	cout << ans << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	fill_dp();
	while(tt--){
		solve();
	}
}

