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
	for(auto &b : v)cin >> b;
	int indx = min_element(v.begin(),v.end()) - v.begin();
	int round = max(0,(v[indx] - indx)/n);
	//cout << round << endl;
	for(int i = 0; i< n;++i){
		if((v[i] - n*round -i) < 0){
			cout << i + 1  <<endl;
			break;
		}
	}
}
