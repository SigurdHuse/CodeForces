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
	int n, s; cin >> n >> s;
	vector<int> v(n);
	for(int i = 0; i < n-1; ++i){
		v[i] = 1;
		s--;
	}
	v[n-1] = s;
	if(s > n){
		cout << "YES" << endl;
		for(int i : v) cout << i<< " ";
		cout << endl;
		cout << n << endl;
	}
	else cout << "NO" << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

