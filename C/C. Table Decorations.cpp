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
	vector<ll> v(3);
	for(auto &x : v) cin >> x;
	sort(all(v));
	
	if(v[2] >= 2*(v[0] + v[1])){
		cout << v[0] + v[1];
		return;
	}
	
	cout << (v[0] + v[1] + v[2])/3;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

