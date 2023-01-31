#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Check a and b seperately

void solve(){
	int n, k; cin >> n >> k;
	string s; cin >> s;
	int ans = 0;
	int cnt = 0;
	int l = 0;
	for(int r = 0; r < n; ++r){
		if(s[r] == 'b') cnt++;
		while(cnt > k){
			if(s[l] == 'b') cnt--;
			l++;
		}
		
		ans = max(ans, r - l + 1);
	}
	cnt = 0;
	l = 0;
	for(int r = 0; r < n; ++r){
		if(s[r] == 'a') cnt++;
		while(cnt > k){
			if(s[l] == 'a') cnt--;
			l++;
		}
		ans = max(ans, r - l + 1);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

