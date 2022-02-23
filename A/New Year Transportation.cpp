#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, t;
	cin >> n >> t;
	t--;
	vector<int> v(n-1);
	for(int i = 0; i<n-1;++i)cin >> v[i];
	int indx = 0;
	while(indx < t){
		indx += v[indx];
	}
	if(indx == t) cout << "YES"<<endl;
	else cout << "NO" <<endl;
}
