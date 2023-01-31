#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

int v[50];

void solve(){
	int n, k; cin >> k >> n;
	
	v[0] = 1;
	int diff = 1, av = n - k + 1, s = 0;
	
	int idx = 1;
	for(;idx <k; ++idx){
		if(s >= av) break;
		v[idx] = v[idx-1] + diff;
		s += diff;
		diff++;
	}
	for(;idx < k; ++idx){
		v[idx] = v[idx-1] + 1;
	}
	REP(i,k) cout << v[i] << " ";
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

