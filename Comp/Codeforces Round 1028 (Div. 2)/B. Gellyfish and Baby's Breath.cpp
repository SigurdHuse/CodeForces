#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const ll M = 998244353;

const int N = 1e5 + 5;

ll two[N], p[N], q[N], r[N];

void fill_two(){
	two[0] = 1;
	for(int i = 1; i < N; ++i){
		two[i] = 2*two[i-1] % M;
	}
}


void solve(){
	int n; cin >> n;
	REP(i,n) cin >> p[i];
	REP(i,n) cin >> q[i];
	ll idxq = 0, idxp = 0, mx = -1;
	bool both = 0, useq = 0;
	
	for(int i = 0; i < n; ++i){
		if(p[i] == mx){
			both = 1;
			useq = 0;
			idxp = i;
		}
		if(p[i] > mx){
			both = 0;
			useq = 0;
			mx = p[i];
			idxp = i;
		}
		if(q[i] == mx){
			both = 1;
			useq = 0;
			idxq = i;
		}
		if(q[i] > mx){
			both = 0;
			useq = 1;
			mx = q[i];
			idxq = i;
		}
		//cout << mx << " " << idxp << " " << idxq << endl;
		if(both == 1){
			if(q[i - idxp] > p[i - idxq]){
				r[i] = two[p[idxp]] + two[q[i - idxp]];
			}
			else{
				r[i] = two[q[idxq]] + two[p[i - idxq]];
			}
		}
		else if(useq == 1){
			r[i] = two[q[idxq]] + two[p[i - idxq]];
		}
		else{
			r[i] = two[p[idxp]] + two[q[i - idxp]];
		}
		r[i] = r[i] % M;
		cout << r[i] << " ";
	}	
	cout << "\n";
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	fill_two();
	while(tt--){
		solve();
	}
}

