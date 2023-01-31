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
	int n; cin >> n;
	
	if(n & 1){
		for(int i = 0; i < n; ++i){
			for(int j = i+1; j < n; ++j){
				if(j - i <= n/2) cout << 1 << " ";
				else cout << -1 << " ";
			}
		}
		cout << endl;
	}
	else{
		for(int i = 0; i < n; ++i){
			for(int j = i+1; j < n;++j){
				if(j - i < n/2) cout << 1 << " ";
				else if(j -i == n/2) cout << 0 << " ";
				else cout << -1 << " "; 
			}
		}
		cout << endl;
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

