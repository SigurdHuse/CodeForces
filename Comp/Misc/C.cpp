#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	int n, k;
	while(tt--){
		cin >> n >> k;
		bool one = ((n%2 == 0) && (k%2 == 0));
		if(one){
			cout << "YES" <<endl;
			for(int i = 1; i<=n;i++){
				int tmp = (i - 1-(i%2 == 0))*k + 1 + (i%2== 0);
				for(int j = tmp; j < tmp + 2*k; j+=2){
					cout << j << " ";
				}
				cout << endl;
			}
		}
		else if(k == 1){
			cout << "YES" <<endl;
			for(int i = 1; i<= n; ++i)cout << i << endl;
		}
		else cout << "NO" << endl;
	}
}
