#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	int t;
	cin >> t;
	int n; 
	for(int _ = 0; _ < t; _ ++){
		cin >> n;
		//vector<int> v(n);
		ll cnt = 0, tmp;
		for(int i = 0; i< n; i++){
			cin >> tmp;
			cnt += tmp;
		}
		if(cnt == n) cout << 0 << endl;
		else if(cnt <= 0) cout << 1 << endl;
		else if(cnt < n) cout << 1 << endl;
		else cout << cnt - n << endl;
	}
}
