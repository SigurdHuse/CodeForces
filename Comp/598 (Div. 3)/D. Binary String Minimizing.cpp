#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n; cin >> n;
	ll k; cin >> k;
	string s, res; cin >> s;
	
	int cnt = 0;
	bool printed = 0;
	for(int i = 0; i< n; ++i){
		if(s[i] == '0'){
			if(cnt <= k){
				res += "0";
				k -= cnt;
			}
			else{
				res += string(cnt - k, '1');
				res += "0";
				res += string(k,'1');
				res += s.substr(i+1);
				cout << res << endl;
				printed = 1;
				break;
			}
		}
		else cnt++;
	}
	if(!printed){
		res += string(cnt, '1');
		cout << res << endl;
	}
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

