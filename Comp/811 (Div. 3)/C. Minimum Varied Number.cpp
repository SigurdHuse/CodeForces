#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int s; cin >> s;
	string ans = "";
	int cur= 9;
	while(s > 0){
		if(s>= cur){
			ans += to_string(cur);
			s -= cur;
			cur--;
		}
		else{
			ans += to_string(s);
			s = 0;
		}
	}
	reverse(all(ans));
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

