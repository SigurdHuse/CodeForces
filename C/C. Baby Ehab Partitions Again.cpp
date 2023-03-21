#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N =105, S = 2e5 + 10;

bool bad(vector<int> v){
	int s = 0;
	for(int i : v) s += i;
	
	if(s % 2) return 0;
	
	bitset<S> b;
	b[0] = 1;
	
	for(int i : v) b |= (b << i);
	
	return b[s / 2];
}

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	if(bad(v)){
		pair<int,int> mn(20, 0);
		for(int i =0 ; i < n; ++i){
			mn = min(mn, make_pair(__builtin_ctz(v[i]), i + 1));
		}
		cout << "1\n" << mn.s << endl;
	}
	else cout << "0\n";
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

