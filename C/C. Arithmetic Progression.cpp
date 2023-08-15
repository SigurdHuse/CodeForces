#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 1e5 + 5;

int a[N];

void solve(){
	int n; cin >> n;
	REP(i,n) cin >> a[i];
	
	if(n == 1){
		cout << -1 << endl;
		return;
	}
	sort(a, a + n);
	bool ok = 1;
	int diff = a[1] - a[0];
	int ans = INT_MAX;
	
	for(int i = 2; i < n; ++i){
		if(a[i] - a[i-1] != diff){
			if(!ok){
				cout << 0 << endl;
				return;
			}
			ok = 0;
			if(a[i-1] + 2*diff == a[i]){
				ans = a[i-1] + diff;
			}
			else{
				cout << 0 << endl;
				return;
			}
		}
	}
	if(!ok){
		cout << 1 << endl;
		cout << ans << endl;
		return;
	}
	if(diff == 0){
		cout << 1 << endl;
		cout << a[0] << endl;
		return;
	}
	if(n == 2){
		if((a[1] + a[0])%2 == 0){
			cout << 3 << endl;
			cout << a[0] - diff << " " << (a[1] + a[0])/2 << " " << a[n-1] + diff << endl;
			return;
		}
	}
	
	cout << 2 << endl;
	cout << a[0] - diff << " " << a[n-1] + diff << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

