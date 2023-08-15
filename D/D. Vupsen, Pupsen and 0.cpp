#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 1e5 + 5;

int a[N], b[N];

void solve(){
	int n; cin >> n;
	REP(i,n) cin >> a[i];
	
	for(int i = 0; i < n-1; i += 2){
		b[i+1] = a[i];
		b[i] = -a[i+1];
	}
	if(n & 1){
		if(b[n-2] - a[n-1] != 0){
			b[n-1] = a[n-2];
			b[n-2] += -a[n-1];
		}
		else{
			b[n-1] = -a[n-2];
			b[n-2] += a[n-1];
		}
		
	}
	//int tmp = 0;
	//for(int i = 0; i < n; ++i){
		//tmp += a[i]*b[i];
	//}
	//cout << tmp << endl;
	
	REP(i,n)cout << b[i] << " ";
	cout << endl;
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

