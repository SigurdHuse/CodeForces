#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	int n, m; cin >> n >> m;
	
	string ans = "";
	
	bool zero = 0, one = 0;
	
	while(n > 0 || m > 0){
		if(((n >= m) && !zero) || one){
			ans += "0";
			zero = 1;
			one = 0;
			n--;
		}
		else{
			if(m > n+1){
				ans += "11";
				m--;
			}
			else ans += "1";
			m--;
			zero = 0;
			one = 1;
		}
	}
	if((n != 0) || (m != 0)){
		cout << -1 << endl;
	}
	else cout << ans << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

