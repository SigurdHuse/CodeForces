#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 1e6 + 5;

pair<int,int> dp[N];

set<int> pos;

void fill_pos(int cur){
	if(pos.count(cur) || cur >= N) return;
	pos.insert(cur);
	
	while(cur < N){
		cur *= 10;
		fill_pos(cur);
		cur++;
		fill_pos(cur);
	}
	
}

void solve(){
	fill_pos(1);
	int n; cin >> n;
	REP(i,N){
		dp[i].s = INT_MAX;
		dp[i].f = 0;
	}
	dp[0].s = 0;
	for(int i : pos){
		dp[i].s = 1;
		dp[i].f = i;
		for(int j = 1; j <= n-i;++j){
			if(dp[j].s < INT_MAX){
				if(dp[j].s + 1 < dp[i+j].s){
					dp[i+j].s = dp[j].s + 1;
					dp[i+j].f = i;
				}
			}
		}	
	}
	//for(int i = 0; i <= n; ++i){
		//cout << dp[i].f << " " << dp[i].s << endl;
	//}
	cout << dp[n].s << endl;
	
	while(n > 0){
		cout << dp[n].f << " ";
		n -= dp[n].f;
	}
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

