#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, k, a; cin >> n >> k;
	set<int> mem;
	deque<int> screen;
	for(int i = 0; i < n;++i){
		cin >> a;
		if(mem.count(a)) continue;
		mem.insert(a);
		if((int)mem.size() > k){
			mem.erase(screen.back());
			screen.pop_back();
		}
		screen.push_front(a);
	}
	cout << mem.size() << endl;
	for(int i : screen) cout << i << " ";
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

