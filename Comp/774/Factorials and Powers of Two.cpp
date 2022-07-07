#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

ll v[20];
ll p2[63];
unordered_map<ll, int> mem;

void fill_ar(){
	v[0] = 1;
	for(int i = 1; i< 20;++i){
		v[i] = v[i-1]*i;
	}
	for(int i = 0; i < 63;++i){
		p2[i] = 1 << i;
	}
}

void solve(){
	ll n;
	cin >> n;
	ll cpy = n;
	//if((n&(n-1))==0) cout << 1 << endl;
	int fac = 19, ans = 0, max_pow = INT_MAX;
	while(n > 0){
		if(mem[n]){
			ans += mem[n];
			break;
		}
		int pow = 0;
		if((n&(n-1))==0){
			ans++;
			n = 0;
		}
		else{
			while(v[fac] > n){
				if(fac >= 0)fac--;
				if(pow >= 0)pow--;
			}
			while(p2[pow] < v[fac] && pow < max_pow)pow ++;
			if(p2[pow] < n){
				n -= p2[pow];
				max_pow = pow-1;
			}
			else{
				n -= v[fac];
				fac--;
			}
			ans++;
		}
	}
	mem[cpy] = ans;
	cout << ans << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	fill_ar();
	int tt;
	cin >> tt;
	while(tt--){
		solve();
	}
}

