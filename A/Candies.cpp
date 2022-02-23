#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,start,stop;
	cin >> n;
	vector<int> v(n);
	for(int i = 0; i< n;++i)cin >> v[i];
	cin >> start >> stop;
	cout << accumulate(v.begin()+start,v.begin()+stop+1,0) <<endl;
}
