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
	int n, m, l, r; cin >> n >> m;
	string s; cin >> s;
	vector<vector<int>> pr(6, vector<int>(n+1));
	string t = "abc";
	int cur = 0;
	
	
	do{
		for(int i = 0; i < n; ++i){
			pr[cur][i+1] = pr[cur][i] + (s[i] != t[i%3]);
		}
		cur++;
	}while(next_permutation(all(t)));
	
	
	while(m--){
		cin >> l >> r;
		
		int ans = n;
		//cout << one << " " << two << " " << tre << endl;
		for(int i = 0; i < 6; ++i){
			ans = min(ans, pr[i][r] - pr[i][l-1]);
		}
		cout << ans << "\n";
	}
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

