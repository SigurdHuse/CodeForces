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
	int n, m; cin >> n >> m;
	vector<int> a(n), b(m);
	
	for(auto &x : a) cin >> x;
	for(auto &x : b) cin >> x;
	sort(all(a));
	
	for(int i = 0; i < m; ++i){
		auto it = upper_bound(all(a), b[i]);
		//if(it != a.begin()) it--;
		cout << it - a.begin() << " ";
	}
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

