#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n, x, odd_cnt = 0,even_cnt = 0, tmp;
	cin >> n >> x;
	REP(i,n){
		cin >> tmp;
		if(tmp % 2)odd_cnt++;
		else even_cnt++;
	}
	if(odd_cnt == 0 || ((even_cnt == 0) && ((x%2) == 0))){
		cout << "NO" << endl;
		return;
	}
	if((odd_cnt % 2) == 0) odd_cnt--;
	cout << (even_cnt + odd_cnt >= x ? "YES": "NO") <<endl;
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

