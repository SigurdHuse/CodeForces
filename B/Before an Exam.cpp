#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n, s;
	cin >> n >> s;
	int min, max;
	ll mins = 0, maxs = 0;
	REP(i,n){
		cin >> min >> max;
		mins += min;
		maxs += max;
	}
	cout << ((maxs >= s)&&(mins <= s) ? "YES" : "NO") << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

