#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2*1e5 + 5;

ll v[N];

void solve(){
	int n; cin >> n;
	REP(i,n) cin >> v[i];
	
	for(int i = 2; i < n; i += 2){
		v[i] += v[i-2];
	}
	for(int i = 3; i < n; i += 2){
		v[i] += v[i-2];
	}
	ll cur;
	if(n & 1) cur = v[n-1];
	else cur = v[n-2];
	
	int last = -1;
	
	ll tmp = cur, ans = cur;
	
	for(int i = 1; i < n; i += 2){
		if(v[i] > v[i-1]){
			if(last == -1){
				tmp += v[i] - v[i-1];
			}
			else{
				tmp += v[i] - v[i-1] - v[last] + v[last-1];
			}
			
			ans = max(ans, tmp);
		}
		else{
			last = i;
		}
		tmp = cur;
	}
	//cout << endl;
	cout << ans << endl;
	//cout << start <<  " " << mx<< endl;
	//REP(i,n) cout << v[i] << " ";
	//cout << endl;
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

