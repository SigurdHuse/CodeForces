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
	for(auto &a : v) cin >> a;
	vector<int> low(all(v)), high(all(v));
	
	sort(all(low));
	sort(all(high), greater<int>());
	
	for(int i = 0, j = 0, k = 0; i < n; ++i){
		if(i & 1){
			v[i] = low[j];
			j++;
		}
		else{
			v[i] = high[k];
			k++;
		}
	}
	
	ll s = 0;
	for(int i = 0; i < n; ++i){
		if(v[i] == s){
			cout << "NO" << endl;
			return;
		}
		s += v[i];
	}
	cout << "YES" << endl;
	for(int i : v) cout << i << " ";
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

