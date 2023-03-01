#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Sum of primes

void solve(){
	int n; cin >> n;
	int  tmp = n;
	bool prime = 1;
	for(int i = 2; i*i <= tmp; ++i){
		if(n % i == 0) prime = 0;
	}
	if((!prime) && ((n & 1) == 0)){
		cout << 2 << endl;
		return;
	}
	if(prime){
		cout << 1 << endl;
		return;
	}
	prime = 1;
	n -= 2;
	for(int i = 2; i*i <= tmp; ++i){
		if(n % i == 0) prime = 0;
	}
	
	cout << (prime ? 2 : 3) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

