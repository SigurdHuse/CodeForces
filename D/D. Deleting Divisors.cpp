#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	

	if(n & 1){
		cout << "Bob" << endl;
		return;
	}
	int cnt = 0;
	while(n % 2 == 0){
		cnt++;
		n /= 2;
	}
	if(n > 1){
		cout << "Alice" << endl;
	}
	else if(cnt % 2 == 0){
		cout << "Alice" << endl;
	}
	else cout << "Bob" << endl;
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

