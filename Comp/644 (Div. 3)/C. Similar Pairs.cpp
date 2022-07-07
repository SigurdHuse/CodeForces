#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> a(n);
	for(auto &x: a) cin >> x;
	int even = 0, odd = 0;
	for(int i : a){
		if(i%2) odd++;
		else even ++;
	}
	if(odd %2 && even%2){
		sort(all(a));
		for(int i = 0; i< n-1;++i){
			if(a[i] + 1 == a[i+1]){
				cout << "YES" << endl;
				return;
			}
		}
		cout << "NO" << endl;
	}
	else if(odd %2 || even%2) cout << "NO" << endl;
	else cout << "YES" << endl;
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

