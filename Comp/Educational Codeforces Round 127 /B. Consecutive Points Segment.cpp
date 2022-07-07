#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	int tree = 0, two = 0;
	for(int i = 0; i < n-1; ++i){
		if(v[i+1] - v[i] > 3){
			cout << "NO" << endl;
			return;
		}
		else if(v[i+1] - v[i] == 2){
			two++;
		}
		else if(v[i+1] - v[i] == 3)tree++;
	}
	if(tree > 1){
		cout << "NO" << endl;
		return;
	}
	if(tree == 1){
		if(two > 0){
			cout << "NO" << endl;
			return;
		}
	}
	if(two > 2){
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
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

