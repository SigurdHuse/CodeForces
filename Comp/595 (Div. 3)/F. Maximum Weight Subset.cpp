#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, k; cin >> n >> k;
	int node1, node2;
	vector<int> w(n);
	for(auto &x : w) cin >> x;
	map<int,vector<pair<int,int>>> tree;
	for(int i = 0; i< n; ++i){
		cin >> node1 >> node2;
		tree[node1].push_back({node2,i});
	}
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

