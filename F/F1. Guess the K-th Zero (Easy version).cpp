#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(int l, int r, int k){
	if(l == r){
		cout << "! " << l << endl;
		return;
	}
	int m = (l + r)/2;
	int sum;
	fflush(stdout);
	cout << "? " << l << " " << m << endl;
	cin >> sum;
	
	if((m - l + 1) - sum >= k){
		solve(l, m, k);
	}
	else{
		solve(m+1, r, k - (m - l + 1) + sum);
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int n, t, k; cin >> n >> t >> k;
	solve(1, n, k);
}

