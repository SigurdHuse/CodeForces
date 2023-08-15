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
	string a, b; cin >> a >> b;
	
	vector<int> ops1, ops2;
	a += '0'; b += '0';
	
	for(int i = 1; i <= n; ++i){
		if(a[i] != a[i-1]) ops1.push_back(i);
		if(b[i] != b[i-1]) ops2.push_back(i);
	}
	
	ops1.insert(ops1.end(), ops2.rbegin(), ops2.rend());
	cout << SZ(ops1);
	
	for(int x : ops1){
		cout << " " << x;
	}
	cout << "\n";
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

