#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// if zero at a bit position we need either 0 0 or 1 1
// if one we need 1 0 and position does not matter when addin

void solve(){
	int x; cin >> x;
	int idx = 29;
	
	for(; idx >= 0; --idx){
		if(bit(x,idx)) break;
	}
	int last = 1;
	int b = 1 << idx, a = 0;
	idx--;
	for(;idx >= 0; --idx){
		if(bit(x, idx)){
			if(last == 0){
				b += (1 << idx);
			}
			last = 1;
		}
		else{
			if(last == 1){
				b += (1 << idx);
				a += (1 << idx);
			}
			last = 0;
		}
	}
	if(((a + b) % 2 != 0) || ((a^b) != x)){
		cout << -1 << endl;
		return;
	}
	int ok = ((a ^ b) == ((a + b)/2));
	if(ok) cout << a << " " << b << endl;
	else cout << -1 << endl;
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

