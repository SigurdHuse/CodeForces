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
	int n0, n1, n2; cin >> n0 >> n1 >> n2;
	string ans = "";
	
	if(n1 == 0){
		if(n0 != 0){
			cout << string(n0 + 1, '0') << endl;
		}
		else{
			cout << string(n2 + 1,'1') << endl;
		}
		return;
	}
	for(int i = 0; i < n1 + 1; ++i){
		if(i & 1) ans += "0";
		else ans += "1";
	}	
	ans.insert(1, string(n0, '0'));
	ans.insert(0, string(n2, '1'));
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

