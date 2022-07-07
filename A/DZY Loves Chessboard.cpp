#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n,m;
	cin >> n>> m;
	string s;
	REP(i,n){
		cin >> s;
		REP(j,m){
			if(s[j] == '.'){
				if((i+j) & 1) s[j] = 'W';
				else s[j] = 'B';
			}
		}
		cout << s << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

