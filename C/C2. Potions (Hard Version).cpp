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
	priority_queue<ll,vector<ll>,greater<ll>> pq;
	ll S = 0;
	
	for(int i = 1; i <= n; ++i){
		ll x; cin >> x;
		S += x;
		pq.push(x);
		
		while(S < 0){
			S -= pq.top();
			pq.pop();
		}
	}
	cout << SZ(pq) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

