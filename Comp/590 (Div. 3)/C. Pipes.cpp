#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<string> v(2);
	vector<vector<bool>> mem(2, vector<bool>(n+1));
	mem[0][0] = 1;
	cin >> v[0] >> v[1];
	for(int i = 0; i< n; ++i){
		if(v[0][i] == '1' || v[0][i] == '2'){
			mem[0][i+1] = 1;
		}
		else mem[1][i] = 1;
		
		if(v[1][i] == '1' || v[1][i] == '2'){
			mem[1][i+1] = 1;
		}
		else{
			if(mem[0][i]) mem[1][i+1] = 1;
			else mem[0][i] = 1;
		}
		
		if(mem[0][i] && mem[0][i+1]) continue;
		if(mem[1][i] && mem[1][i+1]) continue;
		//cout << "NO" << endl;
		//return;
	}
	REP(y,2){
		REP(x,n+1) cout << mem[y][x];
		cout << endl;
	}
	cout << endl;
	//sscout << "YES" << endl;
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

