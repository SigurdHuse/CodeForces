#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	vector<int> mem(10);
	for(int i : v) mem[i%10]++;
	for(int i = 0; i < 10; ++i){
		for(int j = i+1 - (mem[i] > 1); j < 10; ++j){
			for(int k = j+1 - (mem[i] > 2); k < 10; ++k){
				if(mem[i] && mem[j] && mem[k]){
					if((i+j+k)%10 == 3){
						cout << "YES" << endl;
						return;
					}
				}
			}
		}
	}
	cout << "NO" << endl;
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

