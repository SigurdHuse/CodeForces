#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	int t, n, tmp, x;
	cin >> t;
	for(int _ = 0; _ < t; _ ++){
		int even = 0, odd = 0;
		cin >> n >>x;
		for(int i = 0; i< n; i++){
			cin >> tmp;
			if(tmp%2) odd++;
			else even++;
		}
		if(x %2){
			if(((x - odd + ((odd%2)== 0)) <= even) && odd >0) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else{
			if((x - odd - ((odd%2)== 1) <= even) && odd >0 && even > 0) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
	}
}
