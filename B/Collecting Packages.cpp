#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n, x, y, cur_x = 0, last_max = 0;
	cin >> n;
	string ans = "";
	vector<pair<int,int>> v(n);
	REP(i,n){
		cin >> x >> y;
		v[i] = {x,y};
	}
	sort(v.begin(), v.end(),
		[](const auto p1, const auto p2)
		{return p1.first< p2.first;});
	int max_y = 0;
	//for(auto p : v) cout << p.first << " "  <<p.second << endl;
	for(auto p : v){
		if(p.first != cur_x){
			REP(i, p.first - cur_x) ans += "R";
			cur_x = p.first;
			last_max = max_y;
		}
		if(p.second < last_max){
			cout << "NO" << endl;
			return;
		}
		else if(p.second > max_y){
			REP(i,p.second - max_y) ans += "U";
			max_y = p.second;
		}
	}
	cout << "YES" <<endl << ans <<endl;
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

