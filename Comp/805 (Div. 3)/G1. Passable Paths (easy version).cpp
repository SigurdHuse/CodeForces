#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, a, b, q; cin >> n;
	vector<vector<int>> v(n);
	REP(i, n -1){
		cin >> a>> b;
		a--; b--;
		v[a].push_back(b);
	}
	cin >> q;
	REP(e,q){
		cin >> a;
		string ans = "Yes";
		set<int> s, visited;
		REP(j,a){
			cin >> b; s.insert(b-1);
		}
		for(int i = 0; i < n; ++i){
			int cnt = 0;
			if(s.count(i)){
				for(int j : v[i]){
					if(visited.count(j) || s.count(j)) cnt++;
					visited.insert(j); 
				}
			}
			if(cnt > 2){
				ans = "No";
				break;
			}
		}
		cout << ans << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

