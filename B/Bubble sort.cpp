#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

void print_vector(vector<int> &v){
	for(int i : v) cout << i << " ";
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &b:v)cin >> b;
	for(int i = n; i>1;--i){
		for(int j = 1;j<i;j++){
			if(v[j-1] > v[j])swap(v[j-1],v[j]);
		}
		print_vector(v);
		//if(is_sorted(v.begin(),v.end()))break;
	}
}
