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
	if(!(n & 1)){
		cout << n/2 << " " << n/2 << endl;
		return;
	}
	pair<int,int> ans = {1,n-1};
	int mi = n-1;
	
	for(int i = 2; i*i <=n; ++i){
		if(n % i == 0){
			int one = lcm(i,n-i);
			int two = lcm(n/i, n - n/i);
			if(one < mi){
				mi = one;
				ans.f = i; ans.s = n-i;
			}
			if(two < mi){
				mi = two;
				ans.f = n/i; ans.s = n - n/i;
			}
		}
	}
	cout << ans.f << " " << ans.s << endl;
	
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt; cin >> tt;
	while(tt--){
		solve();
	}
}

