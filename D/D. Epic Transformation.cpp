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
	map<int,int> mem;
	int a, n; cin >> n;
	REP(i,n){
		cin >> a;
		mem[a]++;
	}
	
	int cnt = 0;
	
	for(auto p : mem){
		cnt = max(cnt, p.s);
	}
	
	if(n & 1){
		if(cnt >= n/2 +1) cout << cnt - (n - cnt) << endl;
		else cout << 1 << endl;
	}
	else{
		if(cnt >= n/2) cout << cnt - (n - cnt) << endl;
		else cout << 0 << endl;
	}
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

