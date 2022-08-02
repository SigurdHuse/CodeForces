#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	string s; cin >> s;
	int ans = 0, n = s.size();
	int indx = 0; 
	char one = '.', two = '.', thr = '.';
	while(indx < n){
		ans++;
		one = s[indx];
		while(indx < n && s[indx] == one) indx++;
		if(indx >= n) break;
		two = s[indx];
		while(indx < n && (s[indx] == one || s[indx] == two)) indx++;
		if(indx >= n) break;
		thr = s[indx];
		while(indx < n && (s[indx] == one || s[indx] == two || s[indx] == thr)) indx++; 
		one = '.', two = '.', thr = '.';
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

