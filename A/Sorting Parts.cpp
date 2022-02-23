#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	int n;
	while(tt--){
		cin >> n;
		vector<int> v(n);
		for(int i=0;i<n;++i)cin>>v[i];
		bool has_peak = 0;
		for(int i = 1; i< n;++i){
			if(v[i] < v[i-1]){
				has_peak = 1;
			}
		}
		if(has_peak)cout<<"YES"<<endl;
		else cout << "NO" <<endl;
	} 
}
