#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 1e6;

bool mem[N];

void solve(){
	int q, x; cin >> q >> x;
	vector<int> mods(x);
	
	set<pair<int,int>> vals;
	for(int i = 0; i < x; ++i){
		vals.insert(make_pair(mods[i], i));
	}
	
	while(q--){
		int cur; cin >> cur;
		cur %= x;
		vals.erase(make_pair(mods[cur], cur));
		++mods[cur];
		vals.insert(make_pair(mods[cur], cur));
		cout << vals.begin()->first * x + vals.begin()->second << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

