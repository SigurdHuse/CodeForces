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
	int a, b;
	int tot = 0;
	for(int i =0; i < n; ++i){
		cin >> a >> b;
		if(tot + a <= 500){
			tot += a;
			cout << "A";
		}
		else{
			tot -= b;
			cout << "G";
		}
	}
	cout << "\n";
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

