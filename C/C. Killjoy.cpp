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
	int off = 0;
	int same = 0;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	
	for(int i = 0; i < n; ++i){
		off += x - v[i];
		if(v[i] == x) same++;
	}
	if(same == n){
		cout << 0 << endl;
		return;
	}
	if(same > 0){
		cout << 1 << endl;
		return;
	}
	if(off == 0){
		cout << 1 << endl;
		return;
	}
	cout << 2 << endl;
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

