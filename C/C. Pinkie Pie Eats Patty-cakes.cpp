#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 1e5 + 10;

int n, a[N], cnt[N];



bool check(int x){
	for(int i = 1; i<= n; ++i) cnt[i] = 0;
	for(int i = 0; i < n; ++i) cnt[a[i]]++;
	
	set<pair<int,int>, greater<pair<int,int>>> ss;
	
	for(int i = 1; i <= n; ++i){
		if(cnt[i] > 0) ss.insert({cnt[i], i});
	}
	vector<int> b;
	
	for(int i = 0; i < n; ++i){
		if(i >= x && cnt[b[i-x]]){
			ss.insert({cnt[b[i-x]], b[i-x]});
		}
		if(ss.empty()) return 0;
		b.push_back(ss.begin()->second);
		ss.erase(ss.begin());
		cnt[b.back()]--;
	}
	return 1;
}

void solve(){
	cin >> n;
	REP(i,n) cin >> a[i];
	
	int l = 0, r = n;
	
	while(r - l > 1){
		int m = (r + l) / 2;
		if(check(m)){
			l = m;
		}
		else r = m;
	}
	cout << l-1 << endl;
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

