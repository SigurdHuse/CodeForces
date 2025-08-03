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
	int n = SZ(s);
	int cnt = 0;
	bool used = 0;
	
	for(int i = 0; i < n; ++i){
		if(s[i] == '(') cnt--;
		else cnt++;
		//cout << cnt << endl;
		if(cnt == 0){
			if(!used) used = 1;
			else{
				cout << "YES\n"; return; 
			}
		}
	}

	cout << "NO\n";
	
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

