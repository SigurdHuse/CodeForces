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
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	bool gym = 1, prog = 1;
	int rest = 0;
	for(int i = 0; i< n; ++i){
		if(v[i] == 0){
			rest++; gym = 1; prog = 1;
		}
		if(v[i] == 1){
			if(!prog){
				rest++;
			}
			prog ^= 1;
			gym = 1;
		}
		if(v[i] == 2){
			if(!gym){
				rest++;
			}
			gym ^= 1;
			prog = 1;
		}
		if(v[i] == 3){
			if(gym && prog){
				gym = 1;
				prog = 1;
			}
			else if(gym){
				gym = 0;
				prog = 1;
			}
			else if(prog){
				gym = 1;
				prog = 0;
			}
			else{
				rest++;
				gym = 1;
				prog = 1;
			}
		}
	}	
	cout << rest << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

