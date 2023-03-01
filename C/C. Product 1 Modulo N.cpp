#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

bool ok[100005];

void solve(){
	int n; cin >> n;
	ll prod = 1;
	
	for(int i = 1; i < n; ++i){
		if(__gcd(n,i) == 1){
			ok[i] = 1;
			prod = (prod * i) %n;
			
		}
	}
	if(prod != 1) ok[prod] = 0;
	cout << count(ok+1, ok+n,1) << endl;
	
	for(int i = 1; i < n; ++i){
		if(ok[i]) cout << i <<  " ";
	}
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

