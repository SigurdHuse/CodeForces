#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &x : v){
		cin >> x;
		x--;
	}
	for(int i = 0; i< n; ++i){
		int cnt = 0, j = i;
		//cout << i<< " " <<j << endl;
		do{
			cnt++;
			j = v[j];
		}while(j != i);
		cout << cnt << " ";
	}
	cout << endl;
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

