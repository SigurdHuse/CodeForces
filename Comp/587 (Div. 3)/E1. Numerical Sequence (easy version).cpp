#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 


void solve(){
	ll k; cin >> k;
	ll start = (sqrt(8*k + 1) -1)/2;
	cout << start << endl;
	ll diff = k - start;
	cout << diff + 1 << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		solve();
	}
}

