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
	int n, zeros = 0; cin >> n;
	int mx = 0, a;
	for(int i = 0; i < n; ++i){
		cin >> a;
		zeros += (a == 0);
		mx = max(a, mx);
	}
	if(zeros > (n/2 + (n & 1))){
		if(mx == 0){
			cout << 1 << endl;
			return;
		}
		else if(mx == 1){
			cout << 2 << endl;
			return;
		}
		else{
			cout << 1 << endl;
			return;
		}
	}
	else cout << 0 << endl;
	
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

