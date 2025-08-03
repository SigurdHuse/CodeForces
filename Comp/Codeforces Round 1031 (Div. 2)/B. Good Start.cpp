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
	int w, h, a, b; cin >> w >> h>> a >> b;
	int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
	
	if(x1 != x2 && (x2 - x1) % a == 0){
		cout << "YES\n"; return;
	}
	if(y1 != y2 && (y2 - y1) % b == 0){
		cout << "YES\n"; return;
	}
	cout << "NO\n"; 
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

