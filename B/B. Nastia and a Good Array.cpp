#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Find smallest element a and then 
// change all pair to a + 1 and a

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &a : v) cin>> a;
	
	int x = 1e9+7, pos = -1;
	
	for(int i = 0; i < n; ++i){
		if(v[i] < x) x = v[i], pos = i;
	}
	
	cout << n-1 << endl;
	for(int i = 0; i < n; ++i){
		if(i == pos) continue;
		cout << pos+1 << " " << i+1 << " " << x <<" "<< x + abs(i-pos) << endl;
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

