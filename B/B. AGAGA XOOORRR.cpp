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
	int n; cin >> n;
	vector<int> v(n);
	int cur = 0;
	for(auto &a : v){
		cin >> a;
	}
	for(int i = 0; i < n; ++i){
		cur = 0;
		bool flipped = 0;
		for(int j = 0; j < n; ++j){
			if(j == i) continue;
			if(v[j] != v[i]){
				cur ^= v[j];
				flipped = 1;
			}
		}
		if((cur == v[i]) || !flipped){
			cout << "YES" << endl;
			return;
		}
	}
	
	cout << "NO" << endl;
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

