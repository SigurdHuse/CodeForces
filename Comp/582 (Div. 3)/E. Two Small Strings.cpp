#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void order(char one, char two, char tre, int n){
	REP(i,n) cout << one;
	REP(i,n) cout << two;
	REP(i,n) cout << tre;
	cout << endl;
}

void solve(){
	int n; cin >> n;
	string s, t; cin >> s >> t;
	char na = 'w', nb = 'w', nc = 'w';
	if(s[0] == 'a') na = s[1];
	if(s[0] == 'b') nb = s[1];
	if(s[0] == 'c') nc = s[1];
	if(t[0] == 'a'){
		if(na != 'w'){
			order('b','c','a', n);
			return;
		}
		na = t[1];
	}
	if(t[0] == 'b'){
		if(nb != 'w'){
			order('a','c','b', n);
			return;
		}
		nb = t[1];
	}
	if(t[0] == 'c'){
		if(nc != 'w'){
			order('a','b','c', n);
			return;
		}
		nc = t[1];
	}
	cout << "YES" << endl;
	if(nc == 'w') order('a', 'c', 'b',n);
	if(nb == 'w') order('a', 'b', 'c',n);
	if(na == 'w') order('b', 'a', 'c',n);
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

