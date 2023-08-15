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
	vector<int> v(n), tmp(n);
	
	map<int,int> cnt;
	
	REP(i,n){
		cin >> v[i];
		tmp[i] = v[i];
		
		if(cnt.count(v[i])) cnt[v[i]]++;
		else cnt[v[i]] = 1;
	}
	
	sort(all(tmp));
	int mex = 0;
	for(int i = 0; i < n; ++i){
		if(tmp[i] > mex) break;
		if(tmp[i] == mex) mex++;
	}
	
	if(mex == 0){
		cout << "YES" << "\n";
		return;
	}
	
	if(cnt[mex+1] == 0){
		for(auto p : cnt){
			if(p.s > 1 || p.s > mex){
				cout << "YES" << "\n";
				return;
			}
		}
		cout << "NO" << "\n";
		return;
	}
	
	// Need to change things equal to mex + 1
	bool seen = 0, ok = 1;
	
	for(int i = 0; i < n; ++i){
		if(v[i] == mex + 1){
			if(!ok){
				cout << "NO\n";
				return;
			}
			seen = 1;
		}
		else if(seen && v[i] < mex){
			if(cnt[v[i]] == 1){
				ok = 0;
			}
			else cnt[v[i]]--;
		}
	}
	cout << "YES\n";
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

