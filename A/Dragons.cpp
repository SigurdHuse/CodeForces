#include <bits/stdc++.h>
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++)  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,x,y;
	ll s;
	cin >> s >> n;
	vector<pair<int,int>> v(n);
	REP(i,n){
		cin >> x >> y;
		v[i] = {x,y};
	}
	sort(v.begin(),v.end());
	//for(auto b : v) cout << b.first << " " << b.second << endl;
	bool possible = 1;
	REP(i,n){
		if(s <= v[i].first){
			possible = 0;
			break;
		} 
		else s += v[i].second;
	}
	cout << (possible ? "YES" :"NO") << endl;
}
