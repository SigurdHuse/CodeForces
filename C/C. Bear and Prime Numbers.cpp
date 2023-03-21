#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 1e7 + 5;

int cnt[N];

ll cum[N];

vector<bool> prime(N, 1);

void solve(){
	int n, x; cin >> n;
	
	memset(cnt, 0, sizeof cnt);
	memset(cum, 0, sizeof cum);
	while(n--){
		cin >> x;
		cnt[x]++;
	}
	
	for(int i = 2; i < N; i++){
		cum[i] += cum[i-1];
		if(prime[i]){
			for(int j = i; j < N; j += i){
				prime[j] = 0;
				cum[i] += cnt[j];
			}
		}
	}
	int m; cin >> m;
	int MX = 10000000;
	while(m--){
		int l, r; cin >> l >> r;
		l = min(MX, l);
		l--;
		r = min(MX, r);
		
		cout << cum[r] - cum[l] << endl;
	}
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

