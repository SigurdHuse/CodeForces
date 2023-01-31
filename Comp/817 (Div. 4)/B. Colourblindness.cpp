#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	string s1, s2; cin >> s1 >> s2;
	for(int i = 0; i < n; ++i){
		if(s1[i] == 'G' || s1[i] == 'B') s1[i] = 'T';
	}
	for(int i = 0; i < n; ++i){
		if(s2[i] == 'G' || s2[i] == 'B') s2[i] = 'T';
	}
	cout << (s1 == s2 ? "Yes" : "No") << endl;
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

