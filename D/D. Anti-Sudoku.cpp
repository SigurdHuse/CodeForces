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
	vector<string> v(9);
	for(auto &a : v) cin >> a;
	
	for(int i = 0; i < 9; ++i){
		for(int j = 0; j < 9; ++j){
			if(v[i][j] == '1') v[i][j] = '2';
		}
	}
	
	//cout << endl;
	for(string s: v){
		cout << s<< endl;
	}
	
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
