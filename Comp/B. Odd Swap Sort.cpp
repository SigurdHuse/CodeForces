#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt,n;
	cin >> tt;
	while(tt--){
		cin >> n;
		vector<int> v(n);
		bool is_valid = 1;
		for(auto &b : v)cin >> b;
		if(is_sorted(v.begin(),v.end())) is_valid = 1;
		else{
			vector<int> tmp(v.begin(),v.end());
			sort(v.begin(),v.end());
			int start = n-1, end = 0;
			for(int i = 0;i < n;++i){
				if(tmp[i] != v[i]){
					start = i;
					break;
				} 
			}
			for(int i = n-1; i > start;++i){
				if(tmp[i] != v[i]){
					end = i;
					break;
				}
			}
			//cout << start << " " << end <<endl;
			for(int i = start; i<= end;++i){
				if((tmp[i]%2) == (v[i]%2)){
					is_valid = 0;
					break;
				}
			}
		}
		if(is_valid)cout<< "YES" <<endl;
		else cout << "NO" <<endl;
	}
}
