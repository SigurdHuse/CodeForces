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
	vector<string> v(n), rev(n);
	vector<int> c(n);
	for(auto &x : c) cin >> x;
	for(auto &a : v) cin >> a;
	
	for(int i = 0; i < n; ++i){
		rev[i] = v[i];
		reverse(all(rev[i]));
	}
	
	ll ans = 0;
	
	for(int i = 0; i < n-1; ++i){
		if(v[i] > v[i+1]){
			if(c[i] <= c[i+1]){
				if(rev[i] <= v[i+1]){
					v[i] = rev[i];
					ans += c[i];
				}
				else if(rev[i+1] >= v[i]){
					v[i+1] = rev[i+1];
					ans += c[i+1];
				}
				else if(rev[i+1] >= rev[i]){
					v[i+1] = rev[i+1];
					v[i] = rev[i];
					ans += c[i] + c[i+1];
				}
				else{
					cout << -1 << endl;
					return;
				}
			}
			else{
				if(rev[i+1] >= v[i]){
					v[i+1] = rev[i+1];
					ans += c[i+1];
				}
				else if(rev[i] <= v[i+1]){
					v[i] = rev[i];
					ans += c[i];
				}
				else if(rev[i+1] >= rev[i]){
					v[i+1] = rev[i+1];
					v[i] = rev[i];
					ans += c[i] + c[i+1];
				}
				else{
					cout << -1 << endl;
					return;
				}
			}
		}
	}
	for(int i = 0; i < n-1; ++i){
		if(v[i] > v[i+1]){
			cout << -1 << endl;
			return;
		}
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

