#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, s; cin >> n >> s;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	int sum = 0;
	for(bool i : v) sum += i;
	if(sum < s){
		cout << -1 << endl;
		return;
	}
	
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

