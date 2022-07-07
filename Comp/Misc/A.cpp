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
	string s;
	while(tt--){
		cin >> n >> k >>s;
		bool is_pal = 1;
		for(int i = 0; i< n/2; ++i){
			if(s[i] != s[n - i -1]){
				is_pal = 0;
				break;
			}
		}
		int ans = 1 + ((k > 0) &&(!is_pal));
		cout << ans << endl;
	}
}
