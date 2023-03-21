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
	int n; cin >> n;
	string s; cin >> s;
	s = "0" + s;
	vector<int> cur(512, -1);
	
	for(int i = 1; i <= n; ++i){
		if(s[i-1] == '0'){
			if(cur[s[i]] == 0){
				cout << "NO" << endl;
				return;
			}
			else{
				cur[s[i]] = 1;
				s[i] = '1';
			}
		}
		else{
			if(cur[s[i]] == 1){
				cout << "NO" << endl;
				return;
			}
			else{
				cur[s[i]] = 0;
				s[i] = '0';
			}
		}
	}
	//cout << s << endl;
	cout << "YES" << endl;
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

