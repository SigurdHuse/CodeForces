#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2005;

int a[N];

int cnt[1000005];


void solve(){
	int n; cin >> n;
	memset(cnt, 0, sizeof cnt);
	for(int i = 0; i < 2*n; ++i){
		cin >> a[i];
		cnt[a[i]]++;
	}
	sort(a, a + 2*n);
	int r = 2*n - 1;
	int x = a[0] + a[2*n - 1];
	int cur = x;
	vector<pair<int,int>> ans;
	
	while(r >= 0){
		if(cnt[a[r]] == 0){
			r--;
			continue;
		}
		if(cnt[cur - a[r]]){
			ans.push_back({a[r], cur - a[r]});
			cnt[a[r]]--;
			cnt[cur - a[r]]--;
			cur = a[r];
		}
		else{
			cout << "NO" << endl;
			return;
		}
		r--;
	}
	cout << "YES" << endl;
	cout << x << endl;
	for(auto p : ans){
		cout << p.f << " " << p.s << endl;
	}
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

