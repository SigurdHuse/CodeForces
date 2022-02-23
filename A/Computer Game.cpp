#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	int n;
	while(tt--){
		cin >> n;
		vector<vector<char>> dp(2, vector<char>(n));
		for(int i = 0; i < 2;++i){
			for(int j = 0; j < n; j++){
				cin >> dp[i][j];
			}
		}
		dp[0][0] = '2';
		for(int j = 0; j < n-1;j++){
			if(dp[0][j] == '2' || dp[1][j] == '2'){
				if(dp[0][j+1] == '0')dp[0][j+1] = '2';
				if(dp[1][j+1] == '0') dp[1][j+1] = '2';
			}
		}
		/*
		for(auto c : dp){
			for(char d : c) cout << d << " ";
			cout << endl;
		 }
		 */
		if(dp[1][n-1] == '2') cout << "YES" <<endl;
		else cout << "NO"<< endl;
	}
}

