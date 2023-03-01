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
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	sort(all(v));
	int ans = n;
	int pt = n/2;
	
	for(int i = 0; i < n/2; ++i){
		for(;;){
			if(v[i]*2 <= v[pt]){
				ans--;
				pt++;
				break;
			}
			else{
				pt++;
			}
			if(pt == n) break;
		}
		if(pt == n) break;
	}
	cout << ans<< endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

