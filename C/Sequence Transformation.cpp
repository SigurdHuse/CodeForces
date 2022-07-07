#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n, ans = INT_MAX;
	cin >> n;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	unordered_map<int,int> mem;
	mem[v[0]]++;
	for(int i = 1; i< n;++i){
		if(v[i] != v[i-1]){
			mem[v[i]]++;
		}
	}
	for(auto p : mem){
		if(p.second + (p.first != v[n-1]) - (p.first == v[0]) < ans){
			ans = p.second + (p.first != v[n-1])- (p.first == v[0]);
		}
	}
	cout <<((int)mem.size()==1 ? 0 : ans) << endl;
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

