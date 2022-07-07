#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	ll n, m; cin >> n >> m;
	set<int> mem;
	vector<int> nums;
	ll tmp = m;
	while(!mem.count(tmp%10) && tmp <= n){
		nums.emplace_back(tmp%10);
		mem.insert(tmp%10);
		tmp += m;
	}
	tmp -= m;
	ll reps;
	if(tmp != 0) reps = n / tmp;
	else reps = 0;
	ll ans = reps* accumulate(all(nums),0);
	for(int i = 0; i < (n - reps*tmp)/m; ++i){
		ans += nums[i];
	}
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

