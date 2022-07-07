#include <bits/stdc++.h> 
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++) 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt, k;
	cin >> tt;
	map<int,int> m;
	while(tt--){
		cin >> k;
		vector<int> v(k);
		for(auto &b : v)cin>> b;
		for(int i : v)m[i]++;
		sort(m.begin(),m.end());
	}
}
