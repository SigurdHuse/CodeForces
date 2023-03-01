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
	n--;
	int cur = 2;
	int a = 1, b = 0;
	bool turn = 1;
	while(n > 0){
		if(turn){
			b += min(n, cur);
			n -= cur;
			if(n <= 0) break;
			cur++;
			b += min(n, cur);
			n -= cur;
			cur++;
		}
		else{
			a += min(n, cur);
			n -= cur;
			if(n <= 0) break;
			cur++;
			a += min(n, cur);
			n -= cur;
			cur++;
		}
		turn ^= 1;
	}
	cout << a << " " << b << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		solve();
	}
}

