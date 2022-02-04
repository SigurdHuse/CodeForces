#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t, n, tmp;
	cin >> t;
	for(int _ = 0; _ < t; _++){
		cin >> n;
		//vector<int> v(n);
		int odd = 0, even = 0;
		for(int i = 0; i< n; i++){
			cin >> tmp;
			if(tmp%2 && i%2 == 0)odd++;
			else if(i%2 && tmp%2 == 0)even++;
		}
		if(even != odd) cout << -1 << endl;
		else cout << even << endl;
	}
}
