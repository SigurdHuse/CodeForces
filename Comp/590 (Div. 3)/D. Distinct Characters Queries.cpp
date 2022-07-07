#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 


void solve(){
	string s; cin >> s;
	int q, n = (int)s.size(); cin >> q;
	vector<set<int>> pos(26);
	for(int i = 0; i< n; ++i)pos[s[i]-'a'].insert(i);
	for(int i = 0;i < q; ++i){
		int tp; cin >> tp;
		if(tp == 1){
			int poss;
			char c;
			cin >> poss >> c;
			--poss;
			pos[s[poss] - 'a'].erase(poss);
			s[poss] = c;
			pos[s[poss] - 'a'].insert(poss);
		}
		else{
			int l,r; cin >> l >> r;
			--l, --r;
			int cnt = 0;
			for(int c = 0; c < 26;++c){
				auto it = pos[c].lower_bound(l);
				if(it!=pos[c].end() && *it <= r)cnt++;
			}
			cout << cnt << endl;
		}
	}
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

