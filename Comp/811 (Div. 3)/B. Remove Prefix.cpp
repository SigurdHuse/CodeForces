#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	map<int,int> mem;
	vector<int> v(n);
	for(auto &a : v){
		cin >> a;
		mem[a]++;
	}
	int idx =0;
	bool valid = 1;
	for(auto p : mem){
		if(p.second > 1){
			valid = 0; 
			break;
		}
	}
	if(valid){
		cout << 0 << endl;
		return;
	}
	while(idx < n){
		mem[v[idx]]--;
		valid = 1;
		for(auto p : mem){
			if(p.second > 1){
				valid = 0; 
				break;
			}
		}
		idx++;
		if(valid) break;
	}
	cout << idx << endl;
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

