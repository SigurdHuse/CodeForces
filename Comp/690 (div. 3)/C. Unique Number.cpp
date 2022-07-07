#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int x; cin >> x;
	string s = "";
	if(x > 45) cout << -1;
	else{
		for(int i = 9; i > 0 && x > 0; --i){
			if(x - i < 0){
				s += to_string(x);
			}
			else s += to_string(i);
			x -= i;
		}
	}
	reverse(s.begin(),s.end());
	cout << s <<endl;
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

