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
	vector<ll> a(n+1);
	for(int i = 1; i <= n; ++i) cin >> a[i];
	
	if(n & 1){
		cout << "YES" << endl;
		return;
	}
	
	if((n == 2)){
		if((a[2] < a[1])) cout << "NO" << endl;
		else cout << "YES" << endl;
		return;
	}
	
	ll off = 0;
 	for(int i = 1; i <= n-2; i+=2){
		if(a[i+1] < a[i]){
			if(a[i] - a[i+1] <= off){
				off -= a[i] - a[i+1];
				//a[i+1] = a[i];
			}
			else{
				a[i] -= off;
				off = 0;
				a[i+2] += a[i] - a[i+1];
				//a[i+1] = a[i]; 
			}
		}
		else{
			off += a[i+1] - a[i];
		}
	}
	//cout << off << endl;
	//cout << a[n] << " " << a[n-1] << endl;
	if((a[n] < a[n-1]) && (a[n-1] - a[n] > off)){
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
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

