#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n, one_cnt = 0, z_count = 0;
	cin >> n;
	string s;
	cin >> s;
	REP(i,n){
		if(s[i] == '1') one_cnt++;
		else z_count++;
	}
	if(one_cnt == n) cout << "ALICE" << endl;
	else if(one_cnt %2 == 0) cout << "BOB" << endl;
	else cout << "ALICE" << endl;
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

