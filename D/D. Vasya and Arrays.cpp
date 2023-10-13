#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 3e5 + 10;

ll a[N], b[N];

void solve(){
	int n, m;cin >> n;
	a[0] = b[0] = 0;
	for(int i = 1; i <= n; ++i){
		cin >> a[i];
		a[i] += a[i-1];
	}
	cin >> m;
	for(int i = 1; i <= m; ++i){
		cin >> b[i];
		b[i] += b[i-1];
	}
	
	if(a[n] != b[m]){
		cout << "-1\n";
		return;
	}
	
	int ans = 0, idx1 = 1, idx2 = 1;
	while((idx1 <= n) && (idx2 <= m)){
		if(a[idx1] == b[idx2]){
			ans++;
			idx1++;
			idx2++;
		}
		else if(a[idx1] < b[idx2]) idx1++;
		else if(a[idx1] > b[idx2]) idx2++;
	}
	
	cout << ans << "\n";
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

