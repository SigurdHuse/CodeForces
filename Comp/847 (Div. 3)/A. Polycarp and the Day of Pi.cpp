#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

string PI = "314159265358979323846264338327";

void solve(){
	string s; cin >> s;

	int n= SZ(s);
	for(int i = 0; i < n; ++i){
		if(s[i] != PI[i]){
			cout << i << endl;
			return;
		}
	}
	cout << n << endl;
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

