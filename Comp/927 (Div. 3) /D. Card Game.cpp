#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

vector<char> suits = {'C', 'D', 'H', 'S'};

void solve(){
	int n; cin >> n;
	vector<vector<bool>> v(256, vector<bool>(20));
	char trump; cin >> trump;
	
	string s;
	for(int i = 0; i < 2*n; ++i){
		cin >> s;
		//cout << (s[0] - '0') << endl;
		v[s[1]][s[0] - '0'] = 1;
	}
	
	//for(char &c : suits){
		//for(int i = 0; i < 12; ++i) cout << v[c][i] << " ";
		//cout << endl;
	//}
	
	vector<pair<string,string>> ans;
	
	for(char &c : suits){
		if(c == trump) continue;
		
		for(int i = 0; i < 12; ++i){
			if(v[c][i]){
				bool flag = 1;
				for(int j = i+1; j < 12; ++j){
					if(v[c][j]){
						string s1 = to_string(i);
						s1 += c;
						string s2 = to_string(j);
						s2 += c;
						ans.push_back({s1,s2});
						v[c][j] = 0;
						flag = 0;
						break;
					}
				}
				
				if(flag){
					for(int j = 0; j < 12; ++j){
						if(v[trump][j]){
							string s1 = to_string(i);
							s1 += c;
							string s2 = to_string(j);
							s2 += trump;
							ans.push_back({s1,s2});
							flag = 0;
							v[trump][j] = 0;
							break;
						}
					}
				}
				if(flag){
					cout << "IMPOSSIBLE\n";
					return;
				}
				v[c][i] = 0;
			}
		}
	}
	//for(auto &p : ans){
		//cout << p.f << " " << p.s << "\n";
	//}
	for(int i = 0; i < 12; ++i){
		if(v[trump][i]){
			bool flag = 1;
			for(int j = i+1; j < 12; ++j){
				if(v[trump][j]){
					string s1 = to_string(i);
					s1 += trump;
					string s2 = to_string(j);
					s2 += trump;
					ans.push_back({s1,s2});
					flag = 0;
					v[trump][j] = 0;
					break;
				}
			}
			if(flag){
				cout << "IMPOSSIBLE\n";
				return;
			}
		}
	}
	
	for(auto &p : ans){
		cout << p.f << " " << p.s << "\n";
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

