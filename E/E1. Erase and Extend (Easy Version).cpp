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
	int n, k; cin >> n >> k;
	string s; cin >> s;
	string best(k, s[0]);
	string cur(1,s[0]);
	
	for(int i = 1; i < n; ++i){
		cur += s[i];
		string tmp = cur;
		//cout << cur << endl;
		for(int j = 0; j < k / SZ(cur) - 1; ++j){
			tmp += cur;
		}
		for(int j = 0, p = (k / (SZ(cur)))*SZ(cur); p < k; ++p, ++j){
			tmp += cur[j];
		}
		//cout << SZ(tmp) << endl;
		if(tmp < best){
			best = tmp;
		}
	}

	cout << best << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

