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
	int mi, mx;
	
	// We go spaces of two
	// And always end and start on 2*n and 2*n-1
	mi = 2, mx = 2*n;
	for(int i = 0; i < n; ++i){
		if(i & 1){
			cout << mi << " ";
			mi += 2;
		}
		else{
			cout << mx << " ";
			mx -= 2;
		}
	} 
	cout << endl;
	
	mi = 1;
	mx = n + 1;
	
	for(int i = 0; i < n; ++i){
		if(i & 1){
			cout << mx << " ";
			mx += 2;
		}
		else{
			cout << mi << " ";
			mi += 2;
		}
	} 
	cout << endl;
	return;
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

