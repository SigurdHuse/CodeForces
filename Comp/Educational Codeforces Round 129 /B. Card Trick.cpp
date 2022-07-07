#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> deck(n);
	for(auto &a : deck) cin >> a;
	int m; cin >> m;
	vector<int> b(m);
	for(auto &a : b) cin >> a;
	ll s = 0;
	for(int i : b){
		s += i;
		s %= n;
	}
	cout << deck[s] << endl;
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

