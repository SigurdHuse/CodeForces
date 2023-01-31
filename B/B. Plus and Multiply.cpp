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
	int n, a, b; cin >> n >> a >> b;
	
	if(a == 1){
		if((n-1) % b == 0) cout << "Yes" << endl;
		else cout << "No" << endl;
		return;
	}
	
	int t = 1;
	bool flag = 0;
	
	while(t <= n){
		if((t%b) == (n%b)){
			flag = 1;
			break;
		}
		t = t*a;
	}
	
	cout << (flag ? "Yes" : "No") << endl;
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

