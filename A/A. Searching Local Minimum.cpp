#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

vector<int> v(1e5 + 5, INT_MAX);

void guess(int i){
	cout << "? " << i << endl;
	fflush(stdout);
	cin >> v[i];
}


void solve(){
	int n; cin >> n;
	int L = 1, R = n;
	
	while(L < R){
		int m = (L + R) / 2;
		guess(m);
		guess(m+1);
		if(v[m] < v[m+1]) R = m;
		else L = m+1;
	}
	cout << "! " << L << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

