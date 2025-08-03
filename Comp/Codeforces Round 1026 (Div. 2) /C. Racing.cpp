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
	vector<int> d(n), l(n), r(n), last;
	for(auto &x : d) cin >> x;
	
	REP(i,n){
		cin >> l[i] >> r[i];
	}
	int cur = 0;
	for(int i = 0; i < n; ++i){
		if(d[i] == -1){
			last.push_back(i);
		}
		else cur += d[i];
		
		while(cur < l[i]){
			if(last.empty()){
				cout << "-1\n"; return;
			}
			d[last.back()] = 1;
			cur++;
			last.pop_back();
		}
		
		while(cur + SZ(last) > r[i]){
			if(last.empty()){
				cout << "-1\n"; return;
			}
			d[last.back()] = 0;
            last.pop_back();
		}
	}
	
	//for(auto &x : mi) cout << x << " ";
	//cout << "\n";
	
	//for(auto &x : mx) cout << x << " ";
	//cout << "\n";
	
	for(auto &x : d) cout << max(0,x) << " ";
	cout << "\n";
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

