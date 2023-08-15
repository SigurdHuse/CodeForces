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
	int n, m; cin >> n >> m;
	queue<int> q;
	q.push(n);
	
	
	while(q.size()){
		int cur = q.front(); q.pop();
		
		
		if(cur == m){
			cout << "YES" << endl;
			return;
		}
		if(cur % 3 != 0) continue;
		
		q.push(cur/3 * 2);
		q.push(cur/3);
		
	}
	cout << "NO" << endl;
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

