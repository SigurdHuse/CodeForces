#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n; cin >> n;
	for(int i = 1; i <= n/2; i++){
		cout << i <<  " " << n-i + 1 << " ";
	}
	if(n%2) cout << n/2 + 1;
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

