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
	string s; cin >> s;
	vector<int> ans(n);
	vector<int> pos0, pos1;
	
	for(int i = 0; i < n; ++i){
		int newpos = SZ(pos0) + SZ(pos1);
		if(s[i] == '0'){
			if(pos1.empty()) pos0.emplace_back(newpos);
			else{
				newpos = pos1.back();
				pos1.pop_back();
				pos0.push_back(newpos);
			}
		}
		else{
			if(pos0.empty()) pos1.push_back(newpos);
			else{
				newpos = pos0.back();
				pos0.pop_back();
				pos1.emplace_back(newpos);
			}
		}
		ans[i] = newpos;
	}
	cout << SZ(pos0) + SZ(pos1) << endl;
	for(auto it : ans) cout << it+1 << " ";
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt; cin >> tt;
	while(tt--){
		solve();
	}
}

