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
	int n, j, k; cin >> n >> j >> k;
	j--;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	int val = v[j];
	sort(all(v));
	
	if(k >= 2){
		cout << "YES\n"; return; 
	}
	if(val == v[n-1]){
		cout << "YES\n"; return; 
	}
	cout << "NO\n"; return; 
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

