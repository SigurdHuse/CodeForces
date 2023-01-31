#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 150000 + 5;

vector<bool> vis(N);

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	sort(all(v));
	int ans = n;
	for(int i = 0; i < n; ++i){
		if(!vis[max(1,v[i]-1)]){
			vis[max(1,v[i]-1)] = 1;
		}
		else if(!vis[v[i]]){
			vis[v[i]] = 1;
		}
		else if(!vis[v[i]+1]){
			vis[v[i]+1] = 1;
		}
		else ans--;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

