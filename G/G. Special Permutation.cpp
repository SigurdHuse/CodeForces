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
	if(n <= 3){
		cout << -1 << endl;
		return;
	}
	if(n == 4){
		cout << "3 1 4 2" << endl;
		return;
	}
	if(n == 5){
		cout << "5 3 1 4 2" << endl;
		return;
	}
	vector<int> v(n), used(n+1);
	v[0] = n;
	int i = 1;
	for(; i < n; ++i){
		v[i] = v[i-1] - 2;
		if((n & 1) && v[i] == 1) break;
		if(!(n & 1) && (v[i] == 2)) break;
	}
	i++;
	v[i] = v[i-1]+3;
	i++;
	if(n & 1)v[i] = v[i-1]-2;
	else v[i] = v[i-1]-4;
	i++;
	for(; i < n; ++i){
		if((n & 1) && (v[i-1] == 2)) v[i] = v[i-1] + 4;
		else if(!(n & 1) && (v[i-1] == 3)) v[i] = v[i-1] + 4;
		else v[i] = v[i-1]+2;
	}
	for(int j : v) cout << j << " ";
	cout << endl;
	
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

