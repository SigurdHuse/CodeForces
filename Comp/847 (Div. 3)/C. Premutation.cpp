#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 105;

int v[N][N];

void solve(){
	int n; cin >> n;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n - 1; ++j){
			cin >> v[i][j];
		}
	}
	set<int> seen;
	int first;
	for(int i = 0; i < n; ++i){
		if(seen.count(v[i][0])){
			first = v[i][0];
			break;
		}
		seen.insert(v[i][0]);
	}
	cout << first << " ";
	for(int i = 0; i < n; ++i){
		if(v[i][0] != first){
			for(int j = 0; j < n-1; ++j){
				cout << v[i][j] << " ";
			}
			cout << endl;
			return;
		}
	}
	
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

