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
	vector<int> mem(26);
	
	for(char c : s) mem[c - 'a']++;
	int odd = 0;
	for(int i = 0; i< 26; ++i){
		if(mem[i] & 1) odd++;
	}
	
	if((odd == 0) || (odd & 1)){
		cout << "First" << endl;
	}
	else cout << "Second" << endl;
	
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

