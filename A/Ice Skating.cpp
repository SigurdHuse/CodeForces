#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n, x, y, ans = -1;
	cin >> n;
	vector<int> row(1001), col(1001);
	vector<pair<int,int>> mem(n);
	REP(i,n){
		cin >> x >>y;
		col[x]++; row[y]++;
		mem[i] = {x,y};
	}
	for(auto p: mem){
		if(col[p.first] == 1 && row[p.second] == 1){
			ans++;
			row[p.second]++;
			col[p.first]++;
		}
	}
	cout << ans <<endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

