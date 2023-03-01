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
	string s; cin >> s;
	int n = SZ(s);
	vector<int> pos;
	for(int i = 0; i < n; ++i){
		if(s[i] == s[0]) pos.emplace_back(i);
	}
	
	if(SZ(pos) < 3){
		cout << "Just a legend" << endl;
		return;
	}
	string t = "";
	for(int i = pos.back(); i < n; ++i){
		t += s[i];
	}
	for(int i = 0; i < SZ(t); ++i){
		if(s[i] != t[i]){
			cout << "Just a legend" << endl;
			return;
		}
	}
	bool ok = 0;
	int n1 = SZ(pos);
	for(int i = 1; i < n1 - 1; ++i){
		ok = 1;
		for(int j = pos[i]; j < pos[i] + SZ(t); ++j){
			if(s[j] != t[j - pos[i]]){
				ok = 0;
				break;
			}
		}
		if(ok) break;
	}
	cout << (ok ? t : "Just a legend") << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

