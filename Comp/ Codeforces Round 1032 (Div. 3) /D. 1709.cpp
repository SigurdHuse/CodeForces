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
	vector<int> a(n), b(n);
	for(auto &x : a) cin >> x;
	for(auto &x : b) cin >> x;
	
	vector<pair<int,int>> ops;
	for(int i = 1; i <= n; ++i){
		if(count(all(b), i) == 1){
			int tmp = find(all(b), i) - b.begin();
			
			while(tmp < i-1){
				ops.push_back({2,tmp+1});
				swap(b[tmp], b[tmp + 1]);
				tmp++;
			}
			ops.push_back({3,tmp + 1});
			swap(a[tmp], b[tmp]);
		}
		
		int w_idx = i - 1, idx = find(all(a), i) - a.begin();
		while(w_idx != idx){
			if(idx < w_idx){
				ops.push_back({1,idx+1});
				swap(a[idx], a[idx + 1]);
				idx++;
			}
			else{
				ops.push_back({1, idx});
				swap(a[idx - 1], a[idx]);
				idx--;
			}
		}
	}
	for(int i = n+1; i <= 2*n; ++i){
		int w_idx = i - n - 1, idx = find(all(b), i) - b.begin();
		while(w_idx != idx){
			if(idx < w_idx){
				ops.push_back({2,idx+1});
				swap(b[idx], b[idx + 1]);
				idx++;
			}
			else{
				ops.push_back({2, idx});
				swap(b[idx - 1], b[idx]);
				idx--;
			}
		}
	}
	cout << SZ(ops) << "\n";
	for(auto &[one, two] : ops){
		cout << one << " " << two << "\n";
	}
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

