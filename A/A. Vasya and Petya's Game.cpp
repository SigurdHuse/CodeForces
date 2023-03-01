#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// All primes and their powers less than n

void solve(){
	int n; cin >> n;
	vector<bool> prime(n+1, 1);
	vector<int> ans;
	for(int i = 2; i <= n; ++i){
		if(prime[i]){
			for(int j = i*i; j <= n; j += i) prime[j] = 0;
			for(int k = i; k <= n; k *= i){
				ans.push_back(k);
			}
		}
	}
	cout << SZ(ans) << "\n";
	for(int i : ans) cout << i << " ";
	cout << "\n";
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

