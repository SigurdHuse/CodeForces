#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

vector<ll> two(40);

void fill(){
	two[0] = 1;
	for(int i = 1; i< 40;++i){
		two[i] = two[i-1]*2;
	}
}

void solve(){
	int n, ans = 0; cin >> n;
	vector<ll> v(n);
	for(auto &a : v) cin >>a;
	if(n == 1){
		cout << "0" << endl;
		return;
	}
	while(!is_sorted(all(v), less_equal<int>())){
		for(int i = 0; i< n-1; ++i){
			while(v[i] >= v[i+1] && v[i] != 0){
				ans++;
				v[i] /= 2;
			}
		}
		//for(int j : v) cout << j << " ";
		//cout << endl;
		if(v[0] == 0 && v[1] == 0) break;
	}
	for(int i = 0; i< n-1; ++i){
		if(v[i] >= v[i+1]){
			cout << -1 << endl;
			return;
		}
	}
	cout << ans << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	fill();
	while(tt--){
		solve();
	}
}

