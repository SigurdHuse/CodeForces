#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 40043;

int len;
int p[N];

ll query(ll l){
	ll cnt = l / len;
	int rem = l % len;
	return p[len]*1ll * cnt + p[rem];
}

void solve(){
	int a, b; cin >> a >> b;
	len = a*b;
	for(int i = 1; i <= len; ++i){
		p[i] = p[i-1];
		if((i % a) % b != (i % b) % a){
			p[i]++;
		}
	}
	int q; cin >> q;
	ll l,r;
	while(q--){
		cin >> l >> r;
		cout << query(r) - query(l-1) << " ";
	}
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

