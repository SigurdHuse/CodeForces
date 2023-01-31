#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	string s; cin >> s;
	int x; cin >> x;
	int n = SZ(s);
	string w(n, '0');
	
	for(int i = 0; i < min(x,n); ++i){
		if(s[i] == '1') w[i+x] = '1';
	}
	for(int i = n-1; i > max(-1,n-1-x); --i){
		if(s[i] == '1') w[i-x] = '1';
		if(s[i] == '0' && (w[i-x] == '1')){
			cout << -1 << endl;
			return;
		}
	}
	
	for(int i = min(n,2*x); i < max(0,n-1-2*x); ++i){
		if(s[i] == '1'){
			if(s[i-x] == '1') continue;
			w[i+x] = '1';
		}
	}
	
	for(int i = x; i < min(n,2*x); ++i){
		if(s[i] == '1') w[i-x] = '1';
		if(s[i] == '0' && (w[i-x] == '1')){
			cout << -1 << endl;
			return;
		}
		if(s[i] == '0' && (w[i-x] == '1')){
			cout << -1 << endl;
			return;
		}
	}
	
	for(int i = max(0,n-1-2*x); i < n-x; ++i){
		if(s[i] == '1') w[i+x] = '1';
		if(s[i] == '0' && (w[i+x] == '1')){
			cout << -1 << endl;
			return;
		}
	}
	
	
	
	
	cout << w << endl;
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

