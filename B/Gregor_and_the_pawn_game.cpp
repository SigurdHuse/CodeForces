#include <bits/stdc++.h> 
using namespace std; 

int solve(vector<int> & a, vector<int> & b){
	int ans = 0;
	if(a[0]){
		if(b[0]){
			ans++;
			b[0] = 0;
		}
		else if(b[1]){
			ans++;
			b[1] = 0;
		}
	}
	for(int i = 1; i < (int)a.size()-2; i++){
		if(a[i]){
			if(b[i-1]){
				ans ++;
				b[i-1] = 0;
			}
			else if(b[i]){
				ans++;
				b[i] = 0;
			}
			else if(b[i+1]){
				ans++;
				b[i+1] = 0;
			}
		}
		if(a[(int)a.size()-1]){
			if(b[(int)a.size() -1] || b[(int)a.size()-2]) ans++;
		}
	}
	return ans;
}


int main()
{
	int t,n;
	cin >> t;
	vector<int> ans(t);
	for(int i = 0; i< t;i++){
		cin >> n;
		vector<int> one(n), two(n);
		for(int j = 0; j < n; j++) cin >> one[j]; 
		for(int j = 0; j < n; j++) cin >> two[j];
		cout << solve(one,two) << endl;
	}
}
