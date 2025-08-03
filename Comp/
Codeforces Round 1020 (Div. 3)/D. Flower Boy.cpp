#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	int n, m; cin >> n >> m;
	vector<int> a(n), b(m);
	REP(i,n) cin >> a[i];
	REP(i,m) cin >> b[i];
	vector<int> backwards_match(m);
	int j = n-1;
	for(int i = m-1; i>= 0; i--){
		while(j >= 0 && a[j] < b[i]) j--;
		backwards_match[i] = j--;
	}
	vector<int> forwards_match(m);
	j = 0;
	for(int i= 0; i < m; i++){
		while(j < n && a[j] < b[i]) j++;
		forwards_match[i] = j++;
	}
	
	if(forwards_match.back() < n){
		cout << "0\n"; return;
	}
	
	int ans = 1e9 + 5;
	for(int i = 0; i < m; ++i){
		int match_previous = i == 0 ? -1 : forwards_match[i - 1];
		int match_next = i + 1 == m ? n : backwards_match[i + 1];
		if(match_next > match_previous){
			ans = min(ans, b[i]);
		}
	}
	cout << (ans == 1e9 + 5 ? -1 : ans) << "\n";
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

