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
	int n, s; cin >> n >> s;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	sort(all(v));
	int ans =0;
	int k = 0;
	for(int i = 0; i < n; ++i){
		k++;
		if(ans + v[i] + k*(k+1) > s){
			k--;
			break;
		}
		ans += v[i] + k*(k+1);
	}
	cout << k << " " << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

