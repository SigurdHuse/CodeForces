#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> a(n), b(n);
	for(auto &x : a) cin >> x;
	for(auto &x : b) cin >> x;
	
	int one_a = 0, zero_a = 0, one_b = 0, zero_b = 0;
	bool diff_1 = 0, diff_0 = 0;
	for(int i = 0; i< n; ++i){
		one_a += (a[i] == 1);
		zero_a += (a[i] == 0);
		one_b += (b[i] == 1);
		zero_b += (b[i] == 0);
		if((a[i] != b[i]) && (a[i] == 1)) diff_1 = 1;
		if((a[i] != b[i]) && (a[i] == 0)) diff_0 = 1;
	}
	int ans = 0;
	if(diff_1 && diff_0) ans++;
	ans += (abs(one_a - one_b) + abs(zero_b - zero_a))/2;
	
	cout << ans << endl;
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

