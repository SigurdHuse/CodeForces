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
	ll n; cin >> n;
	vector<int> a(n), b1(n), b2(n), powers(31);
	for(auto &x : a) cin >> x;
	
	for(int i = 0; i < n-1; i+=2){
		b1[i] = a[i];
		b1[i+1] = 1;
		
		b2[i+1] = a[i+1];
		b2[i] = 1; 
	}
	if(n & 1){
		b1[n-1] = a[n-1];
		b2[n-1] = 1;
	}
	
	ll one = 0, two = 0;
	
	for(int i = 0; i < n; ++i){
		one += abs(a[i] - b1[i]);
		two += abs(a[i] - b2[i]);
	}
	
	if(one <= two){
		for(int i : b1) cout << i << " ";
		cout << endl;
		return;
	}
	
	for(int i : b2) cout << i << " ";
	cout << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt; cin >> tt;
	while(tt--){
		solve();
	}
}

