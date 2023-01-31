#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	ll l = 1, r = 1e18, response;
	ll mid = l + (r - l)/2;
	while(l + 1 < r){
		mid = l + (r - l)/2;
		cout << "? " << l << " " << mid;
		fflush(stdout);
		cin >> response;
		if(response == -1){
			r = mid;
		}
		else if(response == 0){
			return;
		}
		else{
			l = mid;
		}
	}
	cout << "! " << r << endl;
	fflush(stdout);
}

int main()
{
	//ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

