#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Pigeon hole

const int N = 3e5 + 10;

int a[N];

void solve(){
	int n; cin >> n;
	vector<int> cnt(n+1), ans(n,INT_MAX);
	REP(i,n){
		cin >> a[i];
		cnt[a[i]]++;
	}
	int idx = 1;
	auto it = max_element(all(cnt));
	int num = it - cnt.begin();
	
	//cout << n - *it -1 << endl;
	for(int i = n - *it; i < n; ++i){
		ans[i] = num;
	}
	
	for(int i = 0; i <= n/2; ++i){
		while(idx <= n && cnt[idx] <= 0) idx++;
		cnt[a[i]]--;
		cnt[a[n-1-i]]--;
		ans[n - 1 - i] = min(idx, ans[n-1-i]);
	}
	//REP(i,n+1) cout << cnt[i] << " ";
	//cout << "\n";
	REP(i,n){
		cout << (ans[i] == n+1 || ans[i] == INT_MAX ? -1 : ans[i]) << " ";
	 }
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

