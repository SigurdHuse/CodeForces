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

int p[N];
ll w[N];


void solve(){
	int n, q; cin >> n >> q;
	p[1] = 0;
	
	for(int i = 1; i <= n; ++i){
		cin >> w[i];
	}
	for(int i = 2; i <= n; ++i){
		cin >> p[i];
	}
	
	int x, y;
	ll tmp;
	
	while(q--){
		tmp = 0;
		cin >> x >> y;
		while(x != 0){
			tmp += w[x] * w[y];
			x = p[x];
			y = p[y];
		}
		cout << tmp <<endl;
	}
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

