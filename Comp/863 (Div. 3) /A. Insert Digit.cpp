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
	string d; cin >> d;
	string s; cin >> s;
	
	int cur = n;
	
	for(int i = 0; i < n; ++i){
		if(s[i] < d[0]){
			cur = i;
			break;
		}
	}
	//cout << cur << endl;
	//cout << cur << endl;
	//if(cur == -1) cur = 0;
	s.insert(cur, d);
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

