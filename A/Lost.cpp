#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, q, x;
	cin >> n;
	vector<int> v(n);
	for(auto &b : v) cin >> b;
	cin >> q;
	vector<int> ans(q);
	for(int i = 0; i< q; ++i){
		cin>> x;
		int left = 0, right = n -1, mid;
		bool possible = 0;
		while(left <= right){
			mid = left + (right - left)/2;
			if(v[mid] == x){
				possible = 1;
				break;
			}
			else if(v[mid] > x) right = mid -1;
			else left = mid + 1;
		}
		if(possible) ans[i] = mid;
		else ans[i] = -1;
	}		
	for(int i : ans)cout << i << endl;
}
