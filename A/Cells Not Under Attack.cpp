#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n, c, r, m, c_taken = 0, r_taken = 0;
	cin >> n >> m;
	//vector<int> ans;
	bitset<(int)1e5> row;
	bitset<(int)1e5> col;
	ll ans = n*n;
	for(int i = 0; i< m; ++i){
		cin >> c >> r;
		if(!col[c] && !row[r]){
			ans -= 2*(n - 1) + 1;
			ans += c_taken;
			ans += r_taken;
			c_taken++;
			r_taken++;
		}
		else if(!col[c]){
			ans -= n - 1;
			ans += r_taken - 1;
			c_taken++;
		}
		else if(!row[r]){
			ans -= n-1;
			ans += c_taken - 1;
			r_taken++;
		}
		col[c] = 1;
		row[r] = 1;
		cout << ans << " ";
	}
}
