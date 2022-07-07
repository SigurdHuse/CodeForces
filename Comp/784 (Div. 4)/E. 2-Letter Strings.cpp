#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

// 11 first letters a-k

void solve(){
	int n; cin >> n;
	vector<string> v(n);
	for(auto &x : v) cin >> x;
	ll ans = 0;
	vector<vector<int>> one(11, vector<int>(11)), two(11, vector<int>(11)); 
	for(int i= 0; i< n; ++i){
		one[v[i][0]-'a'][v[i][1]-'a']++;
		two[v[i][1]-'a'][v[i][0]-'a']++;
	}
	for(int i = 0; i < n; ++i){
		for(int j : one[v[i][0] - 'a']){
			ans += j;
		}
		ans -= one[v[i][0] - 'a'][v[i][1]-'a'];
		one[v[i][0] - 'a'][v[i][1]-'a']--;
		for(int j : two[v[i][1] - 'a']){
			ans += j;
		}
		ans -= two[v[i][1] - 'a'][v[i][0]-'a'];
		two[v[i][1] - 'a'][v[i][0]-'a']--;
	}
	cout << ans << endl;
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

