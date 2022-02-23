#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		int tmp, n, has_even = 0;
		cin >> n;
		for(int i = 0; i< n; i++){
			cin >> tmp;
			if((tmp%2) == 0){
				has_even = i+1;
			}
		}
		if(has_even){
			cout << 1 << endl;
			cout << has_even <<endl;
		}
		else{
			if(n > 1){
				cout << 2 <<endl;
				cout << 1 << " " << 2<<endl;
			}
			else cout << -1 << endl;
		}
	}
}
