#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, neg = 0, zero_count = 0;
	ll ans = 0;
	cin >> n;
	vector<int> v(n);
	for(auto &b : v){
		cin >> b;
		if(b<0)neg++;
		if(b == 0)zero_count++;
	}
	if(neg % 2)neg--;
	for(int i : v){
		if(i < 0){
			if(neg != 0){
				ans += abs(-1 - i);
				neg--;
			}
			else if(zero_count){
				ans += abs(-1 - i);
				zero_count--;
			}
			else{
				ans += abs(1 - i);
				neg--;
			}
		}
		else ans += abs(i - 1);
	}
	cout << ans << endl;
}
