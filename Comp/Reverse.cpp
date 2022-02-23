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
		int start = 0, end = 0, tmp = -1;
		int v[n];
		for(auto &b : v) cin >> b;
		for(int i = 0;i<n;++i){
			if(v[i] != i+1){
				start = i;
				tmp = i+1;
				break;
			}
		}
		for(int i = start; i < n;++i){
			if(v[i] == tmp){
				end = i;
				break;
			}
		}
		//cout << start << " " <<end <<endl;
		reverse(v+start,v+end+1);
		for(int i : v)cout << i << " ";
		cout << endl;
	}
}
