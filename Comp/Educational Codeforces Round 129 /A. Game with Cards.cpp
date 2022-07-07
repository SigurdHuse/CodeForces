#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n,m; cin >> n;
	vector<int> alice(n);
	for(auto &a : alice) cin>>a;
	cin >> m;
	vector<int> bob(m);
	for(auto &a : bob) cin >> a;
	sort(all(alice));
	sort(all(bob));
	cout << (alice[n-1] >= bob[m-1] ? "Alice" : "Bob") << endl;
	cout << (bob[m-1] >= alice[n-1] ? "Bob" : "Alice") << endl; 
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

