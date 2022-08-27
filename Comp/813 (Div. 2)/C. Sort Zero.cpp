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
	vector<bool> seen(n+1); 
	vector<int> v(n);
	for(auto &a : v){
		cin >> a;
	}
	int k = 0, off = 0;
	
	for(int i = 0; i < n-1; ++i){
		if(seen[v[i+1]]) v[i+1] = 0;
		//if(seen[v[i]]) v[i] = 0;
		if(v[i] > v[i+1]){
			if(seen[v[i]] && v[i] != 0) off++;
			k = i + 1 - off;
		}
		seen[v[i]] = 1;
	}
	
	cout << k << endl;
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

