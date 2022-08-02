#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	string s, t; cin >> s;
	int n, size = SZ(s); cin >> n;
	map<string,int> pos;
	REP(i,n){
		cin >> t;
		pos[t] = i +1;
	}
	vector<pair<int,int>> ans;
	int start = 0, stop = size;
	
	while(stop > start){
		string cur = s.substr(start, stop - start);
		if(pos.count(cur)){
			ans.push_back({pos[cur], stop});
			start = stop;
			stop = size;
		}
		stop--;
	}
	//cout << start << endl;
	if(start == size-1){
		cout << ans.size() << endl;
		for(auto p : ans){
			cout << p.f << " " << p.second << endl;
		}
	}
	else cout << -1 << endl;
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

