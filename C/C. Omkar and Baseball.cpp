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
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	
	int ans = 0;
	bool right = 0, wrong = 0;
	int i = 0, j = n-1;
	
	for(;(i<n)&&(v[i] == (i+1)); ++i){}
	for(;(j >= 0) &&(v[j] == (j+1)); --j){}
	//cout << i << " " << j << endl;
	
	for(; i <= j; ++i){
		if(v[i] == (i+1)) right = 1;
		else wrong = 1;
	}
	if(wrong){
		ans = 1 + right;
	}
	else ans = 0;
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

