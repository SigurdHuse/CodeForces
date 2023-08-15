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
	ll one = INT_MAX, two = INT_MAX, three = INT_MAX;
	string s;
	ll c;
	int n; cin >> n;
	
	for(int i = 0; i < n; ++i){
		cin >> c >> s;
		if(s == "10") one = min(one, c);
		else if(s == "01") two = min(two, c);
		else if(s == "11") three = min(three, c);
	}
	
	if(three == INT_MAX && (one == INT_MAX || two == INT_MAX)){
		cout << -1 << endl;
		return;
	}
	
	cout << min(three, one + two) << endl;
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

