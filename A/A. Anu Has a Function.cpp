#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int f(int x, int y){
	return (x | y) - y;
}


void solve(){
	int n; cin >> n;
	vector<ll> v(n);
	for(auto &x : v) cin >> x;
	vector<int> cnt(40);
	//sort(all(v), greater<int>());
	
	for(int i = 0; i < n; ++i){
		for(int j = 33; j >= 0; --j){
			if(bit(v[i], j)) cnt[j]++;
		}
	}
	
	int mx_idx = -1, idx = 0;
	
	for(int i = 0; i < n; ++i){
		for(int j = 33; j >= 0; --j){
			if(bit(v[i], j) && (cnt[j] == 1)){
				if(j > mx_idx){
					mx_idx = j;
					idx = i;
				}
				break;
			}
		}
	}
	swap(v[0], v[idx]);
	
	for(auto &x : v) cout << x << " ";
	cout << "\n";
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

