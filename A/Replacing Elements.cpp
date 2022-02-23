#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	int t;
	cin >> t;
	int n, d;
	for(int _ = 0; _ < t; _ ++){
		cin >> n >> d;
		vector<int> v(n);
		for(int i = 0; i< n; i++) cin >> v[i];
		int mi = INT_MAX, mi2 = INT_MAX;
		bool need_check = 0;
		for(int i : v){
			if(i <= mi){
				if(mi != INT_MAX) mi2 = mi;
				mi = i;
			}
			else if(i < mi2) mi2 = i;
			if(i > d) need_check = 1;
		}
		if(need_check){
			if(mi + mi2 <= d) cout <<  "YES" << endl;
			else cout << "NO" << endl;
		}
		else cout << "YES" << endl;
	}
}
