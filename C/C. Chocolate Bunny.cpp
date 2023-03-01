#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Find n and then find the rest

int k;
void guess(int x, int y){
	cout << "? " << x << " " << y <<  endl;
	fflush(stdout);
	cin >> k;
}

void solve(){
	int n; cin >> n;
	
	vector<int> v(n+1, -1);
	int mx = 1;
	for(int i = 2; i <= n; ++i){
		guess(mx, i);
		int a = k;
		guess(i, mx);
		int b = k;
		
		if(a > b){
			v[mx] = a;
			mx = i;
		}
		else{
			v[i] = b;
		}
	}
	
	v[mx] = n;
	
	cout << "! ";
	for(int i = 1; i <=n; ++i) cout << v[i] << " ";
	cout << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

