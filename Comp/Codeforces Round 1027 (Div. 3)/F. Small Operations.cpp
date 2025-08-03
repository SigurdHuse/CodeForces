#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 


const int inf = 1e9;
const int M = 1e9 + 7;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int get_ans(int x, int k){
	if(x == 1) return 0;
	vector<int> divs;
	
	for(int i = 1; i *i <= x; ++i){
		if(x % i == 0){
			divs.push_back(i);
			divs.push_back(x / i);
		}
	}
	sort(all(divs));
	int n = divs.size();
	
	vector<int> dp(n, 100);
	dp[0] = 0;
	
	for(int i = 1; i < n; ++i){
		for(int j = i - 1; j >= 0; --j){
			if(divs[i] / divs[j] > k) break;
			
			if(divs[i] % divs[j] == 0){
				dp[i] = min(dp[i], dp[j] + 1);
			}
		}
	}
	return dp[n-1] == 100 ? -1 : dp[n-1];
}

void solve(){
	int x, y, k; cin >> x >> y >> k;
	int g = gcd(x,y);
	x /= g;
	y /= g;
	
	int ax = get_ans(x,k);
	int ay = get_ans(y,k);
	if(ax == -1 || ay == -1) cout << "-1\n";
	else cout << ax + ay << "\n";
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

