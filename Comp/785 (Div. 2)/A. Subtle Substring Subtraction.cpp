#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	string s; cin>> s;
	int n= (int)s.size();
	if(n == 1){
		cout << "Bob" << " ";
		cout << (int)(s[0] - 'a' + 1) << endl;
		return;
	}
	ll ans1 = 0, ans2 = 0;
	if(n % 2){
		for(int i = 0; i< n-1; ++i){
			ans1 += s[i] - 'a' + 1;
		}
		ans1 -= s[n-1] - 'a' + 1;
		for(int i = 1; i < n; ++i){
			ans2 += s[i] - 'a' + 1;
		}
		ans2 -= s[0] - 'a' + 1;
	}
	else{
		for(int i = 0; i< n; ++i){
			ans1 += s[i] - 'a' + 1;
		}
	}
	cout << "Alice ";
	cout << max(ans1,ans2) << endl; 
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt; cin >> tt;
	while(tt--){
		solve();
	}
}

