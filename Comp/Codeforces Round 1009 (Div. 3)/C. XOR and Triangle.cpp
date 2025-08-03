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
	int x, y = 0; cin >> x;
	bool seen = 0, goal = 0;
	int i = 31;
	for(;i >= 0; --i){
		if(bit(x,i)){
			i--;
			break;
		}
	}
	
	for(;i >= 0; --i){
		if(bit(x,i) == 0){
			y ^= (1 << i);
			goal = 1;
		} 
		else{
			seen = 1;
			y ^= (1 << i);
		}
		if(goal && seen) break;
	}
	cout << (goal && seen ? y : -1) << "\n";
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

