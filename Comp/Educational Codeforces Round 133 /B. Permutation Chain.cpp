#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// We start by swapping first and last
// we then continue swapping i-1-th with i
// where i denotes a_i

void solve(){
	int n; cin >> n;
	vector<vector<int>> ans;
	vector<int> chain(n);
	REP(i,n) chain[i] = i;
	ans.push_back(chain);
	swap(chain[0], chain[n-1]);
	ans.push_back(chain);
	for(int i = 0; i< n-2; ++i){
		swap(chain[i], chain[i+1]);
		ans.push_back(chain);
	}
	cout << SZ(ans) << endl;
	for(auto v : ans){
		for(int i : v) cout << i + 1 << " ";
		cout << endl;
	}
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

