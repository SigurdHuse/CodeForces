#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2e5 + 10;

// We want to create the biggest possible number
void solve(){
	int n; cin >> n;
	vector<int> v(n);
	vector<int> bits(N);
	for(auto &x : v) cin >> x;
	
	for(int i = 0; i < n; ++i){
		for(int b = 0; b <= 25; ++b){
			if(bit(v[i], b)) bits[b]++;
		}
	}
	ll ans = 0;
	for(int i = 0; i < n; ++i){
		int num = 0;
		for(int b = 30; b >= 0; --b){
			if(bits[b]){
				num += (1 << b);
				bits[b]--;
			}
		}
		ans += (ll)num * num;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

