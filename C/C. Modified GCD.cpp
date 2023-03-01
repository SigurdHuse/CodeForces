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
	int a, b, n; cin >> a >> b >> n;
	
	set<int> cand;
	
	for(int i = 1; i*i <= min(a,b); ++i){
		if((a % i == 0) && (b % i == 0)){
			cand.insert(i);
		}
		if((a % i == 0) && (b % (a / i) == 0)){
			cand.insert(a/i);
		}
		if((b % i == 0) && (a % (b / i) == 0)){
			cand.insert(b/i);
		}
	}
	int l, r;
	
	for(int i = 0; i < n; ++i){
		cin >> l >> r;
		if(cand.count(r)){
			cout << r << endl;
			continue;
		}
		
		auto it = cand.upper_bound(r);
		it--;
		if((*it > r) || (*it < l)) cout << -1 << endl;
		else{
			cout << *it << endl;
		}
	}
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

