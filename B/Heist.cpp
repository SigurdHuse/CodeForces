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
	for(auto &b : v) cin >> b;
	int mi = *min_element(v.begin(),v.end()) + n;
	int ans = 0;
	for(int i : v){
		if(i >= mi) ans++;
	}
	cout << ans << endl;
}
