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
	int n, m, d; cin >> n >> m >> d;
	vector<int> v(m+2);
	for(int i = 1; i <= m; ++i) cin >> v[i];
	v[0] = 1;
	v[m+1] = n;
	
	ll cookies = 1, cnt = 1;
	ll mx = LLONG_MIN;
	
	for(int i = 1 + (v[1] == 1); i <= m; ++i){
		ll dist = v[i] - v[i-1] - 1;
		ll cur = dist / d + (v[i+1] - v[i] - 1+ (v[i+1] == n))/d + 1;
		
		ll without = (v[i+1] - v[i-1] - 1 + (v[i+1] == n))/d;
		//cout << cur << " " << without << "\n";
		cookies += dist / d + 1;
		//cout << cur << " " << without << endl;
		if((cur - without > mx)){
			cnt = 1;
			mx = cur - without;
		} 
		else if(cur - without == mx){
			cnt++;
		}
	}
	cookies += (v[m+1] - v[m]) / d;
	
	//cout << mx << endl;
	cout << cookies - mx << " " << cnt << "\n";
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

