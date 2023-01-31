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
	int n, k; cin >> n >> k;
	int ans = 0;
	string s; cin >> s;
	
	vector<bool> changed(n);
	
	for(int i = 0; i < k; ++i){
		vector<int> cnt(26, 0);
		int mx = 0;
		char c = '0';
		for(int j = i; j < n; j+= k){
			cnt[s[j] - 'a']++;
			if(cnt[s[j] - 'a'] >mx){
				mx = cnt[s[j] - 'a'];
				c = s[j];
			}
		}
		for(int j = i; j < n; j += k){
			if(s[j] != c){
				changed[j] = 1;
				ans++;
				s[j] = c;
			}
		}
		//cout << c << endl;
	}
	//cout << s << endl;
	for(int i = 0; i < n/2; ++i){
		if(changed[i] || changed[n-i-1]) continue;
		if(s[i] != s[n-i-1]) ans++;
	}
	
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

