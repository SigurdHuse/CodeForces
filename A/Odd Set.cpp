#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	int t, n, tmp;
	cin >> t;
	for(int _ = 0; _ < t; _ ++){
		cin >> n;
		int odd = 0, even = 0;
		for(int i = 0; i< 2*n; i++){
			cin >>tmp;
			if(tmp%2)odd++;
			else even++;
		}
		if(odd == even) cout << "YES" <<endl;
		else cout << "NO" << endl;
	}
}
