#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int k;

const int md = 1000000007;
const int N = 1234567;
 
int f[N], s[N];

void solve(){
	int a, b; cin >> a >> b;
	
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	cin >> k;
	f[0] = 1;
	for(int i= 1; i < N; ++i){
		f[i] = f[i-1];
		if(i >= k){
			f[i] += f[i - k];
			f[i] %= md;
		}
	}
	
	s[0] = 0;
	
	for(int i = 1; i < N; ++i){
		
	}
	
	while(tt--){
		solve();
	}
}

