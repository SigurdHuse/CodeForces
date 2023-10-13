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
	ll k; cin >> k;
	vector<int> v;
	while(k > 0){
		v.push_back(k % 9);
		k /= 9;
	}
	reverse(all(v));
	for(auto &c : v){
		if(c >= 4) cout << c + 1;
		else cout << c; 
	}
	cout <<"\n";
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

