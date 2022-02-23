#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	int t,n;
	cin >> t;
	for(int _ = 0; _ < t; _ ++){
		cin >>n;
		ll cnt = 0, k = 0;
		vector<int> v(n); 
		for(int i = 0; i< n; i++){
			cin >> v[i];
			cnt += v[i];
		}
		if(cnt/n != (double)cnt/n)cout << -1 << endl;
		else{
			int mx = cnt/n;
			for(int i : v){
				if(i > mx) k++;
			}
			cout << k << endl;
		}	
	}
}
