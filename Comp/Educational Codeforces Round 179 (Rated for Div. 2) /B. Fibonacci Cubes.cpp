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
	int n, m; cin >> n >> m;
	string s(m, '0');
	int goal = 5, f1 = 1, f2 = 2;
	for(int i = 3; i <= n; ++i){
		int tmp = f1 + f2;
		goal += tmp*tmp;
		f1 = f2;
		f2 = tmp;
	}
	int w, l, h;

	for(int i = 0; i < m; ++i){
		cin >> w >> l >> h;
		if(min(w, min(l, h)) < f2) continue;
		if(max(w, max(l,h)) < f1 + f2) continue;
		if(w*l*h < goal) continue;
		s[i] = '1';
	}
	cout << s << "\n";
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

