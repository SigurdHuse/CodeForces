#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >>n;
	vector<int> v(n), indx(n);
	for(auto &b:v)cin >> b;
	iota(indx.begin(),indx.end(),0);
	sort(indx.begin(),indx.end(),
		[&](int i,int j){return v[i]<v[j];});
	cout << indx[0] <<endl;
}
