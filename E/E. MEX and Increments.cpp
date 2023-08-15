#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2e5 + 10;

int cnt[N];

void solve(){
	int n, x; cin >> n;
	memset(cnt, 0, (n+1)*sizeof(int));
	REP(i,n){
		cin >> x;
		cnt[x]++;
	}
	
	// Number and cnt
	priority_queue<pair<int,int>> q;
	
	cout << cnt[0] << " ";
	
	if(cnt[0] > 1){
		q.push({0,cnt[0]-1});
	}
	ll extra = 0;
	for(int i = 1; i <= n; ++i){
		if((cnt[i-1] == 0) && (SZ(q) == 0)){
			for(int j = i; j <= n; ++j){
				cout << "-1 ";
			}
			cout << endl;
			return;
		}
		if(cnt[i-1] == 0){
			auto p = q.top(); q.pop();
			extra += i - 1 - p.f;
			p.s--;
			if(p.s > 0) q.push(p);
		}
		if(cnt[i] > 1) q.push({i,cnt[i]-1});
		
		cout << cnt[i] + extra << " ";
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

