#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 4*1e5 + 5;

int v[N];

void solve(){
	int n; cin >> n;
	REP(i,n) cin >> v[i];
	
	int diff = 0;
	
	int mx = INT_MIN, mi = INT_MAX;
	
	for(int i = 1; i < n-1; ++i){
		if((v[i] != -1) && ((v[i+1] == -1) || (v[i-1] == -1))){
			mx = max(mx, v[i]);
			mi = min(mi, v[i]);
		}
	}
	if((v[n-1] != -1) && (v[n-2] == -1)){
		mx = max(mx, v[n-1]);
		mi = min(mi, v[n-1]);
	}
	if((v[0] != -1) && (v[1] == -1)){
		mx = max(mx, v[0]);
		mi = min(mi, v[0]);
	}
	
	
	if(mx == INT_MIN){
		cout << 0 << " " << 0 << endl;
		return;
	}
	
	for(int i = 0; i < n-1; ++i){
		if((v[i] == -1) || (v[i+1] == -1)) continue;
		diff = max(diff, abs(v[i] - v[i+1]));
	}
	int k = (mx + mi)/2;
	diff = max({diff, abs(mx - k), abs(mi - k)});
	cout << diff << " " << k << endl; 
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

