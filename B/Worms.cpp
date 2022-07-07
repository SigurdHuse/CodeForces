#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int n, m, q;
	cin >> n;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	v.insert(v.begin(), 0);
	for(int i = 1; i< n+1; ++i){
		v[i] += v[i-1];
	}
	cin >> m;
	REP(i, m){
		cin >> q;
		int l = 0, r = n-1, ans = 1;
		while(l <= r){
			int mid = l + (r- l)/2;
			if(v[mid] >= q) r = mid - 1;
			else{
				ans = mid +1;
				l = mid + 1;
			}
		}
		cout << ans << endl;
	}
}
