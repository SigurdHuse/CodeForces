#include <bits/stdc++.h>
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++)  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	string tmp;
	map<string,int>mem;
	vector<pair<string,int>> v;
	REP(i,n){
		cin >> tmp;
		mem[tmp]++;
	}
	for(auto &b : mem) v.push_back(b);
	sort(v.begin(),v.end(),
		[&](const auto &p1, const auto &p2)
		{return p1.second > p2.second;});
	cout << v[0].first << endl;
}
