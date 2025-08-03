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
	vector<int> a(n), b(n);
	for(auto &x : a) cin >> x;
	for(auto &x : b) cin >> x;
	
	int ans = 0;
	map<int, int> one, two;
	
	for(int i = 0; i < n; ++i){
		if(a[i] == b[i]){
			ans = max(ans, i +1);
		}
		if(one.count(b[i])){
			if(i - one[b[i]]> 1)ans = max(ans, one[b[i]] + 1);
		}
		if(two.count(b[i])){
			ans = max(ans, two[b[i]] + 1);
		}
		
		if(one.count(a[i])){
			ans = max(ans, one[a[i]] + 1);
		}
		
		if(two.count(a[i])){
			if(i - two[a[i]]> 1)ans = max(ans, two[a[i]] + 1);
		}
		one[a[i]] = i;
		two[b[i]] = i;
		//cout << ans << "\n";
	}
	cout << ans << "\n";
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

