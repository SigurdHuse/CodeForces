#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	string s; cin >> s;
	map<char,int> mem;
	for(char c : s) mem[c]++;
	string ans = "";
	if(mem['U'] == 0 || mem['D'] == 0){
		if(mem['R'] && mem['L'])ans = "LR";
	}
	else if(mem['R'] == 0 || mem['L'] == 0){
		if(mem['D'] && mem['U']) ans = "UD";
	}
	else{
		REP(i, min(mem['U'], mem['D'])) ans += "U";
		REP(i, min(mem['R'], mem['L'])) ans += "R";
		REP(i, min(mem['U'], mem['D'])) ans += "D";
		REP(i, min(mem['R'], mem['L'])) ans += "L";
	}
	cout << ans.size() << endl;
	if((int)ans.size() > 0)cout << ans << endl;
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

