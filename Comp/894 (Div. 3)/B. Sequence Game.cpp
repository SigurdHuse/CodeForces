#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2e5 + 10;

int a[N];

void solve(){
	int n; cin >> n;
	REP(i,n) cin >> a[i];
	vector<int> ans = {a[0]};
	
	for(int i = 1; i < n; ++i){
		if(a[i] >= a[i-1]){
			ans.push_back(a[i]);
		}
		else{
			ans.push_back(a[i]);
			ans.push_back(a[i]);
		}
	}
	cout << SZ(ans) << "\n";
	for(auto &x : ans) cout << x << " ";
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

