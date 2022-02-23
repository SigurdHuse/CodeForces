#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t, n;
	cin >> t;
	for(int _ = 0; _ < t; _ ++){
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++)cin >> a[i];
		for (int i = n - 2; i >= 0; i--) {
			// the current value depends on the maximum between the 
			// current value and the previous value subtracted by 1
			a[i] = max(a[i], max(0, a[i + 1] - 1));
		}
		
		for (int i = 0; i < n; i++) {
			cout << (a[i] > 0 ? 1 : 0) << " ";
		}
		cout << '\n';
	}
}
