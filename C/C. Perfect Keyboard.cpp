#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

string alf = "abcdefghijklmnopqrstuvwxyz";

void solve(){
	vector<set<char>> G(26);
	string s; cin >> s;
	int n  = SZ(s);
	vector<bool> used(26);
	used[s[0] -'a'] = 1;
	string t(1, s[0]);
	
	int pos = 0;
	
	for(int i = 1; i < n; ++i){
		if(used[s[i] - 'a']){
			if(pos > 0 && t[pos - 1] == s[i]) pos--;
			else if(pos +1 < SZ(t) && t[pos + 1] == s[i]){
				pos++;
			}
			else{
				cout << "NO" << endl;
				return;
			}
		}
		else{
			if(pos == 0) t = s[i] + t;
			else if(pos == SZ(t) - 1){
				t += s[i];
				pos++;
			}
			else{
				cout << "NO" << endl;
				return;
			}
		}
		used[s[i] - 'a'] = 1;
	}
	for(int i = 0; i < 26; ++i){
		if(!used[i]) t += char(i + 'a');
	}
	cout << "YES\n" << t << endl;
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

