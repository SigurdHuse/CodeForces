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
	int n, k; cin >> n >> k;
	vector<string> v(k);
	string s; cin >> s;
	sort(all(s));
	
	if(s[0] != s[k-1]){
		cout << s[k-1] << endl;
		return;
	}
	cout << s[0];
	if(s[k] != s[n-1]){
		for(int i = k; i < n; ++i) cout << s[i];
	}
	else{
		for(int i = 0; i < (n-k+k-1)/k; ++i){
			cout << s[n-1];
		}
	}
	cout << endl;
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

