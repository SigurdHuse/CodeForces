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
	vector<int> cnt(n+1);
	map<int,int> mem;
	int a;
	REP(i,n){
		cin >> a;
		mem[a]++;
	}
	
	int left = 0, right = 0;
	for(auto p : mem){
		cnt[p.s]++;
		right += p.s;
		left++;
	}
	
	int seen = 0;
	int ans = right;
	//cout << right << " " << left << endl;
	for(int c = 1; c <= n; ++c){
		right -= cnt[c];
		left -= cnt[c];
		right -= left;
		//cout << c << endl;
		//cout << right << " " << left << " " << seen << endl;
		ans = min(ans, right + seen);
		seen += c*cnt[c];
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

