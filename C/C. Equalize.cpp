#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Need to determine when it's optimal to flip

void solve(){
	int n; cin >> n;
	string a, b; cin >> a >> b;
	int ans = 0;
	for(int i = 0; i < n; ++i){
		if(a[i] != b[i]){
			ans++;
			if(i < n-1){
				if(a[i+1] == b[i] && a[i] == b[i+1]) swap(a[i], a[i+1]);
			}
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

