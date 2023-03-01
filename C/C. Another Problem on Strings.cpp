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
	int k; cin >> k;
	string s; cin >> s;
	int n = SZ(s);
	int ans = 0, cnt = 0;
	int l = 0;
	
	for(int r = 0; r < n; ++r){
		if(s[r] == '1') cnt++;
		while(cnt > k){
			if(s[l] == '1') cnt--;
			else ans++;
			l++;
		}
		if(cnt == k) ans++;
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

