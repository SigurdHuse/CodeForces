#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	ll a, b, n, s; cin >> a >> b >> n >> s;
	ll start;
	if(s<= n*a) start = s - n*(s/n);
	else start = s - n*a;
	//cout << start << endl;
	cout << (start - b <= 0 ? "YES" : "NO") << endl;
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

