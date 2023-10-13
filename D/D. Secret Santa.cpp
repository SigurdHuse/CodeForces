#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2e5 + 10;

int a[N], n;

void solve(){
	cin >> n;
	for(int i = 1; i <= n; ++i) cin >> a[i];
	vector<bool> used(n+1);
	//vector<int> ans(n+1, -1);
	int k = 0, idx = 1;
	
	for(int i = 1; i <= n; ++i){
		if(used[a[i]]){
			a[i] = -1;
			continue;
		}
		k++;
		used[a[i]] = 1;
	}
	
	for(int i = 1; i <= n; ++i){
		if(a[i] == -1){
			while(used[idx]) idx = (idx + 1) % (n+1);
			used[idx] = 1;
			a[i] = idx;
		}
	}
	
	cout << k << "\n";
	for(int i = 1; i <= n; ++i) cout << a[i] << " ";
	cout << "\n";
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

