#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Can start in R, G, B

vector<char> let = {'R', 'G', 'B'};

void solve(){
	int n, k; cin >> n >> k;
	string s; cin >> s;
	int ans = INT_MAX;
	for(int off = 0; off <= 2; ++off){
		int cur = 0;
		
		for(int i = 0; i < k; ++i){
			if(s[i] != let[(i + off) % 3]) cur++;
		}
		//cout << off << " " << 0 << " "<<  cur << endl;
		ans = min(ans, cur);
		for(int i = k; i < n; ++i){
			if(s[i] != let[(i + off) % 3]) cur++;
			if(s[i-k] != let[(i + off -k) % 3]) cur--;
			//cout << off << " "<< i << " "<<  cur << endl;
			ans = min(ans, cur);
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt; cin>> tt;
	while(tt--){
		solve();
	}
}

