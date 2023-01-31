#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	unordered_map<string, int> mem;
	int n; cin >> n;
	vector<vector<string>> v(3, vector<string>(n));
	
	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < n; ++j){
			cin >> v[i][j];
			mem[v[i][j]]++;
		}
	}
	int one = 0, two = 0, thr = 0;
	for(int i = 0; i < n; ++i){
		if(mem[v[0][i]] == 1) one += 3;
		else if(mem[v[0][i]] == 2) one++;
	}
	for(int i = 0; i < n; ++i){
		if(mem[v[1][i]] == 1) two += 3;
		else if(mem[v[1][i]] == 2) two++;
	}
	for(int i = 0; i < n; ++i){
		if(mem[v[2][i]] == 1) thr += 3;
		else if(mem[v[2][i]] == 2) thr++;
	}
	cout << one << " " << two << " " << thr << endl;
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

