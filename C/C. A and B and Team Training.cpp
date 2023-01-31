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
	int n, m; cin >> n >> m;
	int ans = 0;
	
	while(n > 0 && m > 0){
		if(n <= 1 && m <= 1) break;
		if(n > m){
			n -= 2;
			m--;
		}
		else{
			n--;
			m -= 2;
		}
		ans++;
	}
	cout<< ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

