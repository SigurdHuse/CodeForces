#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	int indx = 0, cnt = 0;
	vector<bool> mem(n);
	for(int i = 1; i <= n && cnt < n-1;++i){
		if(v[indx] == i){
			indx++;
			continue;
		}
		for(int j = indx; j < n; ++j){
			if(v[j] == i){
				while(cnt < n-1 && j > indx){
					//cout << i << " " << j << endl;
					if(!mem[j]){
						swap(v[j], v[j-1]);
						cnt++;
						mem[j] = 1;
					}
					j--;
				}
				indx++;
				break;
			}
		}
	}
	for(int i : v) cout << i << " ";
	cout << endl;
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

