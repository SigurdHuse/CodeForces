#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

vector<pair<int,int>> dirs = {{1,0}, {-1,0}, {0,1},{0,-1}};

void solve(){
	int n; cin >> n;
	vector<int> x(n), y(n);
	REP(i,n) cin >> x[i] >> y[i];
	
	sort(all(x));
	sort(all(y));
	
	ll one = x[SZ(x)/2] - x[(SZ(x) - 1)/2] + 1;
	ll two = y[SZ(y)/2] - y[(SZ(y) - 1)/2] + 1;
	cout << one * two << endl;
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

