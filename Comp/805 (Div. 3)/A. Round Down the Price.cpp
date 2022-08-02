#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int m, cpy; cin >> m;
	cpy = m;
	int exp = -1; 
	while(cpy){
		exp++;
		cpy /= 10;
	}
	cout << setprecision(16) << m - pow(10,exp) << endl;
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

