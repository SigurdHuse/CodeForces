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
	ll n, m; cin >> n >> m;

	if(n == 1 && m == 1){
		cout << "1\n"; return;
	}
	if(m < n){
		cout << "-1\n"; return;
	}
	
	if(m == n){
		cout << "1\n";
		for(int i = n; i >1; --i){
			cout <<i << " 1\n"; 
		}
		return;
	}
	
	m -= n;
	ll cnt = n, weird = -1;
	vector<ll> pre;
	while(m > 0 && cnt > 0){
		if(m + 1 >= cnt){
			pre.push_back(cnt);
			m -= cnt;
			m++;
			cnt--;
		}
		else if(m  + 1 < cnt){
			pre.push_back(m+1);
			weird = m+1;
			m = 0;
		}
		else break;
	}
	
	if(m > 0){
		cout << "-1\n"; return;
	}
	int k = SZ(pre);
	if(k > 0){
		cout << pre[0] << "\n";
	}
	for(int i = 1; i < k; ++i){
		cout << pre[0] << " " << pre[i] << "\n";
	}
	
	if(k > 0)cout << pre[0] << " 1\n";
	for(ll i = cnt; i> 1;--i){
		if(i != weird)cout << "1 " << i << "\n";
	}
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

