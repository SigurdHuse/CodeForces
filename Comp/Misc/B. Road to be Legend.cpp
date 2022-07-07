#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n; cin >> n;
	string s;
	cin >> s;
	int cnt = 1, ans = 1;
	char last = s[0];
	for(int i = 1; i <n; ++i){
		if(s[i] != last) cnt++;
		else{
			ans = max(ans, cnt);
			cnt = 1;
		}
		last = s[i];
	}
	ans = max(ans, cnt);
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

