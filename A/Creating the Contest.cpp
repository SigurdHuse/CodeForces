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
	for(int i=0; i< n;++i)cin >> v[i];
	int ans =1, cnt = 1;
	for(int i = 1; i< n;++i){
		if(v[i] <= v[i-1]*2)cnt++;
		else cnt = 1;
		ans = max(ans,cnt);
	}
	cout << ans << endl;
}
