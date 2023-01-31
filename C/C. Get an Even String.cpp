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
	int m = 0, n = SZ(s);
	
	vector<bool> prev(26, false);
	
	for(auto &i : s){
		if(prev[i-'a']){
			m += 2;
			for(int j = 0; j < 26; ++j) prev[j] = false;
		}
		else prev[i-'a'] = true;
	}
	cout << n - m << endl;
	
	
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

