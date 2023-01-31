#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Bubble sort

void solve(){
	int n; cin >> n;
	vector<pair<int,bool>> a(n);
	
	REP(i,n) cin >> a[i].f;
	REP(i,n) cin >> a[i].s;
	vector<pair<int,bool>> tmp(all(a));
	sort(all(tmp));
	
	
	
	cout << (ok ? "YES" : "No") << endl;
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

