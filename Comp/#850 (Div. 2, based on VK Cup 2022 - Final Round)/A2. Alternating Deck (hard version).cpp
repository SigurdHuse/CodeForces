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
	n--;
	int aw = 1, ab = 0, bw = 0, bb = 0;
	bool black = 1, turn = 1;
	int cur = 2;
	
	while(n > 0){
		for(int i = 0; i < 2; ++i){
			for(int j = 0; j < min(n,cur); ++j){
				if(turn){
					if(black) bb++;
					else bw++;
				}
				else{
					if(black) ab++;
					else aw++;
				}
				black ^= 1;
			}
			n -= cur;
			if(n <= 0) break;
			cur++;
		}
		turn ^= 1;
	}
	cout << aw << " " << ab << " " << bw << " " << bb << "\n";
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

