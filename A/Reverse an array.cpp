#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n;++i)cin>>v[i];
	reverse(v.begin(),v.end());
	for(int i : v) cout << i << " ";
}
