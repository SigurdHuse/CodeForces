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
	vector<int> v(n), ans(n);
	for(auto &a : v) cin >> a;
	sort(all(v));
	int l = 0, r = n-1;
	
	for(int i = 0; i < n-3; i += 3){
		ans[i] = v[r];
		r--;
		ans[i+1] = v[l];
		l++;
		ans[i+2] = v[r];
	}
	int cnt = 0;
	for(int i =1; i < n-1; ++i){
		if((ans[i] < ans[i-1]) && (ans[i] < ans[i+1])) cnt++;
	}
	cout << cnt << endl;
	for(int i : ans) cout << i << " ";
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

