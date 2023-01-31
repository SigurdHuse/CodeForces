#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Want a left lamp to the right of a right lamp

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	
	if(s[0] == 'R' && s[n-1] == 'L'){
		cout << 0 << endl;
		return;
	}
	bool right = 0;
	for(int i = 0; i < n-1; ++i){
		if(s[i] == 'L' && s[i+1] == 'R'){
			cout << i+1 << endl;
			return;
		}
		if(s[i] == 'R') right = 1;
		if(s[i] == 'L' && right){
			cout << 0 << endl;
			return;
		}
	}
	if(s[n-1] == 'L' && right){
		cout << 0 << endl;
		return;
	}
	cout << -1 << endl;
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

