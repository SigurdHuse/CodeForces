#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n, x, y;
	cin >> n >> x >> y;
	if(y < x) swap(x,y);
	int inc = (y - x)/(n-1) + x;
	REP(i,n -1){
		cout << x << " ";
		x += inc;
	}
	cout << y<<endl;
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

