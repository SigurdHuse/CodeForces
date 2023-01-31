#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Greedily bring a friend

void solve(){
	int n; cin >> n;
	vector<int> v(n), tmp(n);
	int y; 
	for(auto &a : tmp) cin >> a;
	REP(i,n){
		cin >> y;
		v[i] = y - tmp[i];
	}
	
	sort(all(v));
	int idx = -10;
	for(int i = 0; i < n; ++i){
		if(v[i] >= 0){
			idx = i-1;
			break;
		}
	}
	//cout << idx << endl;
	//for(int i : v) cout << i << " ";
	//cout << endl;
	if(idx == -10){
		cout << 0 << endl;
		return;
	}
	int ans = 0;
	for(int i = idx+1; i < n; ++i){
		if(idx >= 0 && v[i] + v[idx] >= 0){
			idx--;
			ans++;
		}
		else{
			if(i != n-1){
				ans++;
				i++;
			}
		}
	}
	cout << ans << endl;
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

