#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> a(n), b(n);
	vector<int> dmax(n), dmin(n);
	for(auto &A : a) cin >> A;
	for(auto &A : b) cin >> A;
	
	int mi = b[0], mx = b[n-1];
	
	for(int i = 0; i < n; ++i){
		dmax[i] = abs(mx - a[i]);
		dmin[i] = abs(mi - a[i]);
	}
	for(int i : dmin) cout << i << " ";
	cout << endl;
	for(int i : dmax) cout << i << " ";
	cout << endl;
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

