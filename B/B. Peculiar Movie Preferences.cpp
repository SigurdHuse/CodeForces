#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int n;
int seen[20000], last[20000];
int powers[3];


int _hash(string &s){
	int ans = 0;
	for(int i = 0; i < SZ(s); ++i){
		ans += powers[i] * (s[i] - 'a');
	}
	return ans;
}

void solve(){
	cin >> n;
	memset(seen, 0, sizeof seen);
	memset(last, 0, sizeof last);
	vector<string> v(n);
	
	for(auto &s : v){
		cin >> s;
		seen[_hash(s)]++;
		
		if(SZ(s) == 3){
			string tmp = s.substr(1,2);
			last[_hash(tmp)]++;
		}
		
	}
	
	for(int i = 0; i < n; ++i){
		if(SZ(v[i]) == 1){
			cout << "YES" << endl;
			return;
		}
		if(SZ(v[i]) == 2){
			int cur = _hash(v[i]);
			reverse(all(v[i]));
			if(seen[_hash(v[i])] || last[_hash(v[i])]){
				cout << "YES" <<endl;
				return;
			}
			seen[cur]--;
		}
		else{
			string tmp = v[i].substr(0,2);
			string tmp2 = v[i].substr(1,2);
			
			reverse(all(tmp));
			
			if(seen[_hash(tmp)]){
				cout << "YES" << endl;
				return;
			}
			int cur = _hash(v[i]);
			reverse(all(v[i]));
			if(seen[_hash(v[i])]){
				cout << "YES" << endl;
				return;
			}
			last[_hash(tmp2)]--;
			seen[cur]--;
		}
	}
	cout << "NO" << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	powers[0] = 1;
	powers[1] = 27;
	powers[2] = 27*27;
	while(tt--){
		solve();
	}
}

