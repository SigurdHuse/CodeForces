#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i< n; ++i)cin >> v[i];
	int start = 0, end = 0, mx = INT_MIN;
	bool has_peaked = 0, finished = 0;
	for(int i = 1; i < n;++i){
		if(v[i-1] < v[i]){
			if(v[i] < mx){
				end = -1;
				break;
			}
			if(!finished){
				start = i;
				if(has_peaked){
					end = i;
					finished = 1;
				}
			}
				
		}
		else{
			mx = v[i-1];
			has_peaked = 1;
		}
	}
	cout << start +1 << " " <<end <<endl;
}
