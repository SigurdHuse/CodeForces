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
	ll n, k; cin >> n >> k;
	string ans(n, 'a');
	ll cnt = n*(n-1)/2;
	
	if(k == cnt){
		ans[0] = 'b'; ans[1] = 'b';
		cout << ans << endl;
		return;
	}
	
	for(int i = 0; i<  n; ++i){
		if(cnt < k){
			ans[i-1] = 'b';
			ans[n- k+cnt] = 'b';
			break;
		}
		cnt -= n - i -1;
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

