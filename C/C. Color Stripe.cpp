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
	string s; cin >> s;
	s += "-";
	s = "-" + s;
	int ans = 0;
	
	for(int i = 2; i <= n; ++i){
		if(s[i] == s[i-1] && s[i] == s[i+1]){
			ans++;
		}
		
		else if(s[i] == s[i-1]){
			ans++;
			s[i] = (s[i-1] + 1);
			if(s[i] - 'A' >= k){
				s[i] = 'A';
				if(s[i] == s[i-1] && (k != 2)){
					s[i] = 'C';
				}
			}
		}
	}
	cout << ans << "\n";
	for(int i = 1; i <= n; ++i) cout << s[i];
	cout << "\n";
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

