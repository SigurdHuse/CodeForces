#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Need to check every second letter
// Both when starting from first and second

void solve(){
	string s; cin >> s;
	int n = SZ(s);
	if(n == 1){
		cout << 0 << endl;
		return;
	}
	int ans = 0;
	for(int i = 1; i < n-1; i++){
		if(s[i-1] == s[i+1]){
			s[i+1] = '1';
		}
		if(s[i] == s[i-1]){
			s[i] = '1';
		}
	}
	if(s[n-2] == s[n-1]) s[n-1] = '1';
	REP(i,n) ans += s[i] == '1';
	//for(int i = 3; i < n-2; i+=2){
		//if(s[i] == s[i-2] || s[i] == s[i+2]){
			//s[i] = '1';
			//ans++;
		//}
	//}
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

