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
	int n, x, c; 
	cin >> n >> x;
	int first = -1, second = 0;

	for(int i = 0; i < n; ++i){
		cin >> c;
		if(first == -1 && c){
			first = i;
		}
		else if(c){
			second = i;
		}
	}
	x -= second - first + 1;
	if(x >= 0) cout << "YES\n";
	else cout << "NO\n";
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

