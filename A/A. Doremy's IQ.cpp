#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int a[100005],b[100005];

void solve(){
	int n, iq; cin >> n >> iq;
	for(int i = 1; i <= n; ++i){
		cin >> a[i];
	}
	
	int nq = 0;
	
	for(int i = n; i >= 1; --i){
		if(a[i] <= nq) b[i] = 1;
		else if(nq < iq) ++nq, b[i] = 1;
		else b[i] = 0;
	}
	for(int i = 1; i <= n; ++i){
		cout << b[i];
	}
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

