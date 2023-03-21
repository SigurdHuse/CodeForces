#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

bool check(vector<int> &v){
	vector<int> p = {0,1,2,3, 4, 5, 6, 7};
	do{
		if((v[p[0]] + v[p[1]] + v[p[2]] + v[p[3]]) != (v[p[4]] * v[p[5]] * v[p[6]]*v[p[7]])){
			return false;
		}
	}while(next_permutation(all(p)));
	
	
	return true;
}

void solve(){
	int n; cin >> n;
	ll ans1 = 0, ans2 = 0, ans3 = 0;
	int a, mx = INT_MIN;
	
	if(n == 1){
		int one, two; cin >> one >> two;
		cout << min(abs(one - two), abs(two - one)) << endl;
		return;
	}
	
	if(n == 2){
		for(int i = 0; i < 2*n; ++i){
			cin >> a;
			ans1 += abs(a);
			ans2 += abs(a + 1);
			ans3 += abs(a - 2);
			mx = max(a, mx);
		}
		ans2 -= abs(mx + 1);
		ans2 += abs(mx - n);
		
		cout << min({ans1, ans2, ans3}) << endl;
		return;
	}
	for(int i = 0; i < 2*n; ++i){
		cin >> a;
		ans1 += abs(a);
		ans2 += abs(a + 1);
		mx = max(a, mx);
	}
	if(!(n & 1)){
		ans2 -= abs(mx + 1);
		ans2 += abs(mx - n);
		
		cout << min(ans1, ans2) << endl;
	}
	else{
		cout << ans1 << endl;
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

