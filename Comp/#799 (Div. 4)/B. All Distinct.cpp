#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	set<int> s;
	for(auto &a: v){
		cin >> a;
		s.insert(a);
	}
	if((v.size() - s.size()) % 2) cout << s.size() -1 << endl;
	else cout << s.size() << endl;
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

