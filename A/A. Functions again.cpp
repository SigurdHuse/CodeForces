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
	vector<ll> v(n);
	vector<ll> diff(n);
	
	for(auto &x : v) cin >> x;
	
	if(n == 2){
		cout << abs(v[1] - v[0]) << endl;
		return;
	}
	
	if(n == 3){
		cout << max(abs(v[2] - v[1]) - abs(v[1] - v[0]), abs(v[1] - v[0]) - abs(v[2] - v[1]));
		return;
	}
	
	for(int i = 1; i < n; ++i){
		diff[i] = abs(v[i-1] - v[i]);
	}
	
	for(int i = 1; i < n-1; i += 2){
		diff[i] += diff[i-2];
	}
	for(int i = 2; i < n-1; i += 2){
		diff[i] += diff[i-2];
	}
	
	
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

