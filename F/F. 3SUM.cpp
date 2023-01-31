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
	vector<vector<bool>> mem(10, vector<bool>(3)), new_mem(10, vector<bool>(3));
	int n; cin >> n;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	
	for(int i = 0; i < n; ++i){
		int l = v[i] % 10;
		new_mem = mem;
		for(int j = 0; j < 10; ++j){
			for(int k = 0; k < 2; ++k){
				if(mem[j][k]){
					new_mem[(j + l)%10][k+1] = 1;
				}
			}
		}
		new_mem[l][0] = 1;
		swap(mem, new_mem);
		if(mem[3][2]){
			cout << "YES" << endl;
			return;
		}
	}
	//for(int j = 0; j < 10; ++j){
		//for(int k = 0; k < 3; ++k){
			//cout << mem[j][k] << " ";
		//}
		//cout << endl;
	//}
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

