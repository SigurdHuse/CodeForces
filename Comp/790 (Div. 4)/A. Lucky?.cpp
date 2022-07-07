#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	string s; cin >> s;
	int first = 0, last = 0;
	for(int i = 0; i< 3; ++i){
		first += s[i];
	}
	for(int i = 3; i< 6; ++i) last += s[i];
	cout << (last == first ? "YES" : "NO" ) << endl;
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

