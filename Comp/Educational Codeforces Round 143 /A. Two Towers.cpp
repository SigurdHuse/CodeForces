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
	string one, two; cin >> one >> two;
	
	for(int tmp = 0; tmp < 30; tmp++){
		n = SZ(one);
		for(int i = 0; i < n-1; ++i){
			if(one[i] == one[i+1]){
				string seg = one.substr(i+1);
				reverse(all(seg));
				two += seg;
				one.resize(i+1);
				break;
			}
		}
		m = SZ(two);
		for(int i = 0; i < m-1; ++i){
			if(two[i] == two[i+1]){
				string seg = two.substr(i+1);
				reverse(all(seg));
				one += seg;
				two.resize(i+1);
				break;
			}
		}
	}
	m = SZ(two);
	n = SZ(one);
	for(int i = 0; i < n-1; ++i){
		if(one[i] == one[i+1]){
			cout << "NO\n";
			return;
		}
	}
	
	for(int i = 0; i < m-1; ++i){
		if(two[i] == two[i+1]){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
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

