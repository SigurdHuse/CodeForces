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
	int n, x; cin >> n >> x;
	vector<pair<int,int>> v(n);
	int mx_blow = 0, mx = 0;
	for(auto &[d, h]: v){
		cin >> d >> h;
		mx_blow = max(mx_blow, d);
		mx = min(mx, h - d);
	}
	
	if((mx == 0) && (x > mx_blow)){
		cout << -1 << endl;
		return;
	}
	int ans = 0;
	
	if(mx_blow >= x){
		cout << 1 << endl;
		return;
	}
	
	ans += (x - mx_blow)/abs(mx) + ((x - mx_blow) % abs(mx) != 0) + 1;
	
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

