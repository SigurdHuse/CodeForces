#include <bits/stdc++.h>
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++)  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, q, m, mid;
	cin >> n;
	vector<int> v(n);
	for(auto &b : v)cin >> b;
	sort(v.begin(),v.end());
	cin >> q;
	REP(i,q){
		cin >> m;
		int l = 0, r = n-1, ans = 0;
		if(v[0] <= m){
			while(l <= r){
				mid = l + (r - l)/2;
				if(v[mid] <= m){
					l = mid + 1;
					ans = mid+1;
				}
				else r = mid - 1;
			}
		}
		cout << ans << endl;
	}
}
