#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	int t;
	cin >> t;
	for(int _ = 0; _ < t; _ ++){
		int n, tmp;
		int odd= 0, cnt = 0;
		bool other = 0;
		cin >> n;
		for(int i = 0; i< n; i++){
			cin >> tmp;
			if(tmp % 2){
				odd = tmp;
			}
			else other = 1;
			cnt++;
		}
		if((odd && (other || (cnt % 2) == 1))) cout << "YES" << endl;		
		else cout << "NO" << endl;
	}
}
