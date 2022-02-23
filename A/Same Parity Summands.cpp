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
		if(k > n || ((n % 2) && (!(k%2))) || (k == n - 1)){
			cout << "NO" << endl;
			continue;
		}
		
	}
}
