#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Need to start and end in the same number

// Find smallest possible max number 

const int M = 998244353;

void solve(){
	int n, m; cin >> n >> m;
	int ans = 0;
	
	// Elements left
	int left = n - 2;
	
	for(int start = 1; start <= m - n + 2; ++start){
		
		
		// Numbers to choose from
		int nums = m - start;
		
		if(nums < left) break;
		
		// Numbers of maxes to choose from
		int maxs = nums - left + 1;
		
		
		ans += maxs * left;
		ans %= M;
		
		ans += maxs*(maxs + 1) / 2 * (left - 1);
		ans %= M;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

