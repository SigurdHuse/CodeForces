#include <bits/stdc++.h> 
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++) 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll tt, n;
	cin >> tt;
	while(tt--){
		cin >> n;
		vector<int> v(n);
		for(auto &b : v)cin >> b;
		bool possible = 0;
		REP(i,n){
			for(int j = i+2; j< n; j++){
				if(v[i] == v[j])possible = 1;
			}
			if(possible)break;
		}
		cout << (possible ? "YES" :"NO")<< endl;
	}
}
