#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, x;
	cin >> n >> x;
	unordered_set<int> mem;
	vector<int> v(n);
	for(int i = 0; i< n;++i){
		cin >> v[i];
		mem.insert(v[i]);
	}
	bool possible = 0;
	for(int i : v){
		if(mem.count(x - i) && (x-i) != i){
			possible = 1;
			break;
		}
	}
	if(possible) cout << "YES" <<endl;
	else cout << "NO" <<endl;
}
