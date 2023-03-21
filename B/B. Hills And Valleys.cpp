#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 3e5 + 10;

int a[N], hill[N], valley[N];

void solve(){
	int n; cin >> n;
	REP(i,n) cin >> a[i];
	memset(hill, 0, (n + 3) * sizeof(int));
	memset(valley, 0, (n+3) * sizeof(int));
	int ans = 0;
	
	for(int i = 1; i < n-1; ++i){
		if((a[i] > a[i-1]) && (a[i] > a[i+1])){
			ans++;
			hill[i] = 1;
		}
		if((a[i] < a[i-1]) && (a[i] < a[i+1])){
			ans++;
			valley[i] = 1;
		}
	}
	
	int off = 0;
	for(int i = 1; i < n-1; ++i){
		if(hill[i]){
			if(hill[i + 2]) off = max(off, 3);
			if(valley[i+1]){
				if((i == 1) || (i == n-3)){
					off = max(off, 2);
					continue;
				}
				if(a[i-1] <= a[i-2]) off = max(off,2);
				if(a[i+2] >= a[i+3]) off = max(off,2);
			}
			off = max(off, 1);
		}
		if(valley[i]){
			if(valley[i + 2]) off = max(off, 3);
			if(hill[i+1]){
				if((i == 1) || (i == n-3)){
					off = max(off, 2);
					continue;
				}
				if(a[i-1] >= a[i-2]) off = max(off,2);
				if(a[i+2] <= a[i+3]) off = max(off,2);
			}
			off = max(off, 1);
		}
	}
	
	cout << ans - off << endl;
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

