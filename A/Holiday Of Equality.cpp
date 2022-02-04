#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	int mx = *max_element(v.begin(),v.end());
	long long int ans = 0;
	for(int i : v){
		ans += mx - i;
	}
	cout << ans << endl;
}
