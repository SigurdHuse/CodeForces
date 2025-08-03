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
	bool turn = 0;
	vector<int> seen(n);
	for(int i = 0; i < n; ++i){
		if(turn) break;
		if(!seen[i]){
			seen[i] = 1;
			turn ^= 1;
			for(int j = 0; j < n; ++j){
				if(!seen[j]){
					if((i + j) % 4 == 3){
						seen[j] = 1;
						turn ^= 1;
						break;
					}
				}
			}
		}
	}
	cout << (turn ? "Alice" : "Bob") << "\n";
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

