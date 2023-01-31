#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	string ans = "";
	char tmp;
	
	for(int i = n-1; i >= 0; --i){
		if(s[i] == '0'){
			tmp = s[i-1] + 10*(s[i-2] -'0') - '0';
			i -= 2;
		}
		else{
			tmp = s[i] - '0';
		}
		//cout << char(tmp + 'a') << endl;
		ans += tmp + 'a' - 1;
	}
	//cout << char('3' - '0' + 'a' - 1) << endl;
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

