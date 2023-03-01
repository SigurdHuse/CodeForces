#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int guess(int l, int r){
	cout << "? " << l + 1 << " " << r + 1 << endl;
	int k; cin >> k;
	fflush(stdout);
	return k;
}

void solve(){
	int n; cin >> n;
	
	int l = 0, r = n-1;
	
	while(l < r){
		int mid = (r - l)/2 + l;
		if(mid == l) break;
		int one = guess(l, r);
		int two = guess(l, mid);
		
		
		
		if(one == two){
			l = mid + 1;
		}
		else r = mid - 1;
	}
	cout << "! ";
	cout << l + 1 << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

