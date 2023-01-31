#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

vector<ll> fac = {1,1,2,6,24,120,720,5040,40320,362880};

ll f(ll a){
	ll ans = 1;
	while(a > 0){
		ans *= fac[a % 10];
		a /= 10;
	}
	return ans;
}

void solve(){
	int n; cin >> n;
	string a; cin >> a;
	string ans = "";
	for(char c : a){
		if(c == '1' || c == '0') continue;
		if(c == '2') ans += "2";
		if(c == '3') ans += "3";
		if(c == '4'){
			ans += "22";
			ans += "3";
		}
		if(c == '5'){
			ans += "5";
		}
		if(c == '6'){
			ans += "3";
			ans += "5";
		}
		if(c == '7'){
			ans += "7";
		}
		if(c == '8'){
			ans += "222";
			ans += "7";
		}
		if(c == '9'){
			ans += "2";
			ans += "33";
			ans += "7";
		}
	}
	sort(all(ans), greater<char>());
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

