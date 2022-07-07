#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n, tmp = 0; cin>> n;
	string ans = "";
	bool turn = 1;
	while(tmp < n){
		if(turn){
			tmp += 1;
			ans += "1";
		}
		else{
			tmp += 2;
			ans += "2";
		}
		turn ^= 1;
	}
	if(tmp > n){
		ans = ""; tmp = 0; turn = 0;
		while(tmp < n){
			if(turn){
				tmp += 1;
				ans += "1";
			}
			else{
				tmp += 2;
				ans += "2";
			}
		turn ^= 1;
		}
	}
	reverse(ans.begin(),ans.end());
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

