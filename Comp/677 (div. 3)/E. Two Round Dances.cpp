#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

vector<ll> fac(20);
void fill_fac(){
	fac[0] = 1;
	for(int i = 1; i< 20; ++i)fac[i] = fac[i-1]*i;
}

void solve(){
	ll n; cin >> n;
	cout << fac[n-1]/(n/2) << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	fill_fac();
	solve();
}

