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
	int l1, b1, l2, b2, l3, b3;
	cin >> l1 >> b1 >> l2 >> b2 >> l3 >>b3;
	
	if(b3 + b2 == b1){
		if(l2 == l3 && l1+l2 == b1){
			cout << "YES\n"; return;
		}
	}
	if(l3 + l2 == l1){
		if(b2 == b3 && b1 + b2 == l1){
			cout << "YES\n"; return;
		}
	}
	if(b3 == b2 && b2 == b1){
		if(l1 + l2 + l3 == b3){
			cout << "YES\n"; return;
		}
	}
	if(l3 == l2 && l2 == l1){
		if(b1 + b2 + b3 == l1){
			cout << "YES\n"; return;
		}
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

