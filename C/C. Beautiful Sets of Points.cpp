#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

bool beatiful(pair<int,int> &p1, pair<int,int> &p2){
	double dist = pow(p1.f-p2.f,2) + pow(p1.s-p2.s,2);
	return sqrt(dist)*sqrt(dist) != dist;
	
	
}

void solve(){
	int n, m; cin >> n >> m;
	cout << min(n,m) + 1 << endl;
	for(int i = 0; i <= min(n,m); ++i){
		cout << i <<" "<< min(n,m) - i << endl;
	}
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

