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
		for(int i = 0; i< n; i++)cin >> v[i];
		sort(v.begin(),v.end());
		ll ans = 0;
		bool turn = 1;
		for(int i = n - 1; i > -1;i--){
			if(turn && ((v[i]%2) == 0)){
				ans += v[i];
			}
			else if((!turn)&&(v[i]%2) == 1) ans -= v[i];
			turn ^= 1;
		}
		if(ans > 0) cout << "Alice" << endl;
		else if(ans < 0) cout << "Bob" <<endl;
		else cout << "Tie" << endl;
	}
}
