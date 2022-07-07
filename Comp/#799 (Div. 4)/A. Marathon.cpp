#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int a, b, c,d;
	cin >> a >> b >> c >>d;
	int pos = 0;
	if(b > a) pos++;
	if(c > a) pos++;
	if(d > a) pos++;
	cout << pos << endl;
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

