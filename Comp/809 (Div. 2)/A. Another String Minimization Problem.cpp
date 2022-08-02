#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n,m; cin >> n >>m;
	string s(m, 'B');
	m--;
	vector<int> v(n);
	for(auto &a : v){
		cin >> a;
		a--;
	}
	for(int i : v){
		if(m - i< i){
			if(s[m-i] == 'B') s[m-i] = 'A';
			else s[i] = 'A';
		}
		else{
			if(s[i] == 'B') s[i] = 'A';
			else s[m-i] = 'A';
		}
	}
	cout << s << endl;
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

