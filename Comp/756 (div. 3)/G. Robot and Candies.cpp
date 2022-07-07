#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

int n, m;

void search(vector<string> &v, x, y){
	if(x >= m-1 || y < 0 || y >= n) return;
	v[y][x] = '0';
	if(y == n-1) search(v, y-1, x+1);
	else if(v[])
}

void solve(){
	vector<string> v(n);
	for(auto &x : v) cin >> x;
	int ans = 0;
	for(int i = 0; i < m; i++){
		if(v[0][i] == '1') ans += 1;
		search(v, i, 0);
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

