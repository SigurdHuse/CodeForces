#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, cnt = 0; cin >> n;
	string s; cin >> s;
	for(int i = 0; i< n; i += 2){
		if(s[i] == s[i+1]){
			cnt ++;
			if(s[i] == 'a') s[i] = 'b';
			else s[i] = 'a';
		}
	}
	cout << cnt << endl;
	cout << s << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

