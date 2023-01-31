#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Diagonal

/*
 ...##....
 ..###....
 .###.....
 ###......
 ##.......
*/


void solve(){
	int n; cin >> n;
	int k = 4;
	k += 3*n;
	
	//vector<string> v(n+10, string(50, '.'));
	//v[0][0] = '#';
	//v[1][0] = '#';
	//v[0][1] = '#';
	//v[1][1] = '#';
	
	cout << k << endl;
	cout << 0 << " " << 0 << endl;
	cout << 0 << " " << 1 << endl;
	cout << 1 << " " << 0 << endl;
	cout << 1 << " " << 1 << endl;
	
	for(int i = 2; i <= n+1; ++i){
		//v[i][i-1] = '#';
		//v[i][i] = '#';
		//v[i-1][i] = '#';
		cout << i << " " << i-1 << endl;
		cout << i << " " << i << endl;
		cout << i-1 << " " << i << endl;
	}
	//for(auto &s : v) cout << s << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

