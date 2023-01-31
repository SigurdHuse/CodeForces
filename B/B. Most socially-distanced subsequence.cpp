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
	int n; cin >>n;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	
	vector<int> ans;
	
	ans.push_back(v[0]);
	
	
	for(int i = 1; i < n-1; ++i){
		if(v[i] > v[i+1] && v[i] > v[i-1]) ans.push_back(v[i]);
		if(v[i] < v[i+1] && v[i] < v[i-1]) ans.push_back(v[i]);	
	}
	ans.push_back(v[n-1]);
	
	cout << SZ(ans) << endl;
	for(int j : ans) cout << j << " ";
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

