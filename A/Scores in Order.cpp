#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int v[n] = {0};
	for(int k = 0; k< n;k++){
		cin >> v[n-1];
		int ans = 0;
		for(int i = n; i>1;--i){
			for(int j = 1;j<i;j++){
				if(v[j-1] < v[j]){
					swap(v[j-1],v[j]);
					ans++;
				}
			}
			//for(int k : v) cout << k << " ";
			//cout << endl;
		}
		cout << n - ans << endl;
	}
	//reverse(v,v+n);
	for(int i : v)cout << i << " ";
	cout << endl;
}
