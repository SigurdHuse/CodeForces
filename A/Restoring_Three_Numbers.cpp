#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	long long int x1, x2, x3, x4;
	cin >> x1 >> x2 >> x3 >> x4;
	vector<long long int> v = {x1,x2,x3,x4};
	sort(v.begin(), v.end());
	for(int i = 0; i< 3; i++){
		cout<< v[3] - v[i] << " ";
	}
	cout << endl;
}
