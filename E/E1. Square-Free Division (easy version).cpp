#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int MAXA = 1e7;

vector<int> primes;
int mind[MAXA + 1];

void fill(){
	for(int i = 2; i <= MAXA; ++i){
		if(mind[i] == 0){
			primes.emplace_back(i);
			mind[i] = i;
		}
		for(auto &x : primes){
			if(x > mind[i] || x*i > MAXA) break;
			mind[x*i] = x;
		}
	}
}

void solve(){
	int n, k; cin >> n >> k;
	vector<int> a(n,1);
	
	for(int i = 0; i < n; ++i){
		int x; cin >> x;
		
		int cnt = 0, last = 0;
		
		while(x > 1){
			int p = mind[x];
			if(last == p) cnt++;
			else{
				if(cnt %2 == 1) a[i] *= last;
				last = p;
				cnt = 1;
			}
			x /= p;
		}
		if(cnt % 2 == 1) a[i] *= last;
	}
	
	int L = 0, ans = 1;
	map<int,int> last;
	
	for(int i = 0; i < n; ++i){
		if(last.find(a[i]) != last.end() && last[a[i]] >= L){
			ans++;
			L = i;
		}
		last[a[i]] = i;
	}
	cout << ans << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	fill();
	while(tt--){
		solve();
	}
}

