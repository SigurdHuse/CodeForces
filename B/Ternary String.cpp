#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	string s;
	cin >> s;
	int n = (int)s.size(), ans = INT_MAX;
	//int start = 0, end = -1;
	vector<bool> mem(3);
	vector<int> last(3);
	REP(i,n){
		if(s[i] == '1'){
			last[0] = i;
			mem[0] = 1;
		}
		else if(s[i] == '2'){
			last[1] = i;
			mem[1] = 1;
		}
		else{
			last[2] = i;
			mem[2] = 1;
		}
		if(mem[0] && mem[1] && mem[2]){
			int ch = *max_element(last.begin(), last.end()) - *min_element(last.begin(),last.end()) + 1;
			ans = min(ans, ch);
		}
	}
	cout << (ans == INT_MAX ? 0 : ans) << endl;
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

