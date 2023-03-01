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
	int a, b; cin >> a >> b;
	if(b <= a){
		cout << a - b << endl;
		return;
	}
	int ans = 1;
	int tmp = b;
	
	while((tmp | a) != tmp){
		tmp++;
		ans++;
	}
	
	if((b | a) == b) ans = 1;
	
	for(int j = 0, i = a; i <= b; ++i, ++j){
		ans = min(ans, b - i + j);
		ans = min(ans, (b | i) - b + j + 1);
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

