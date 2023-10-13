#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2e5 + 5;

int a[N];

void solve(){
	a[0] = 0;
	int h, n; cin >> h >> n;
	for(int i = 1; i <= n; ++i) cin >> a[i];
	reverse(a + 1, a + n + 1);
	int idx = n-1, ans = 0;
	while(idx > 0){
		//cout << h << " " << ans << " "<< idx << "\n";
		if(a[idx] == h-1){
			if(a[idx - 1] == h-2){
				h -= 2;
				idx--;
			}
			else{
				ans++;
				h = a[idx-1] + 1;
			}
		}
		else{
			h = a[idx] + 1;
		}
		idx--;
	}
	ans += (h >= 3);
	cout << ans << endl;
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

