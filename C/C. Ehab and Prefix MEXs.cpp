#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int a[100005], b[100005];
bool ex[1000005];

void solve(){
	int n; scanf("%d", &n);
	for(int i = 1; i <= n; ++i){
		scanf("%d", &a[i]);
	}
	memset(b, -1, sizeof(b));
	for(int i = 1; i <= n; ++i){
		if(a[i] != a[i-1]){
			b[i] = a[i-1];
			ex[b[i]] = 1;
		}
	}
	ex[a[n]] = 1;
	int m = 0;
	for(int i = 1; i <= n; ++i){
		while(ex[m]){
			m++;
		}
		if(b[i] == -1){
			b[i] = m;
			ex[m] = 1;
		}
		printf("%d ", b[i]);
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

