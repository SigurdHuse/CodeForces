#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

// Pick letter closest to current

void solve(){
	string s; cin >> s;
	vector<vector<int>> mem(26);
	int n = SZ(s);
	for(int i = 0; i < n; ++i){
		mem[s[i] - 'a'].push_back(i);
	}
	vector<int> ans;
	char cur = s[0] - 'a';
	int diff = 0;
	if(s[0] >= s[n-1]){
		for(int i = s[0] - 'a'; i >= s[n-1] - 'a'; --i){
			if(SZ(mem[i]) > 0){
				diff += abs(cur - i);
				cur = i;
				for(int j : mem[i]) ans.push_back(j);
			}
		}
	}
	else{
		for(int i = s[0] - 'a'; i <= s[n-1] - 'a'; ++i){
			if(SZ(mem[i]) > 0){
				diff += abs(cur - i);
				cur = i;
				for(int j : mem[i]) ans.push_back(j);
			}
		}
	}
	cout << diff << " " << SZ(ans) << endl;
	for(int i : ans) cout << i + 1<< " ";
	cout << endl;
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

