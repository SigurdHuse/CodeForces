#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t, n;
	cin >> t;
	for(int j = 0; j < t; j++){
		cin >> n;
		int s = 0;
		if(n % 4) cout << "NO" << endl;
		else{
			vector<int> ans(n);
			for(int i = 0; i < n/2;i++){
				ans[i] = 2*(i+1);
				s += ans[i];
			}
			for(int i = n/2; i < n - 1; i++){
				ans[i] = 2*(i - n/2) + 1;
				s-= ans[i];
			}
			ans[n-1] = s;
			cout << "YES" <<endl;
			for(int i : ans) cout << i << " ";
			cout << endl;
		}
	}	
}
