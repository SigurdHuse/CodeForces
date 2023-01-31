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
	long double x, y, nx, ny;
	int r;
	cin >> r >> x >> y >> nx >> ny;
	r *= 2;
	long double dist = sqrt(pow(x-nx,2)+pow(y-ny,2));
	//cout << dist << endl;
	cout << ceil(dist / r) << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

