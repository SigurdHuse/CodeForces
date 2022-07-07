#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, ans = -1;
	cin >> n;
	string s = to_string(n);
	if(n % 2 == 0) ans = 0;
	else if(((int)(s[0] - '0')) % 2 == 0) ans = 1;
	else{
		for(int i = 1; i < (int)s.size(); ++i){
			//cout << (int)(s[i] - '0') << endl;
			if(((int)(s[i] - '0')) % 2 == 0){
				ans = 2;
				break;
			}
		}
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

