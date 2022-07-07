#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	vector<char> mem(26);
	for(int i = 0;i <26;++i)mem[i] = i + 'a';
	for(auto &x : v) cin >> x;
	string start = "";
	for(int i = 0; i < 50;++i){
		char tmp = (i%26 + 'a');
		start += tmp;
	}
	cout << start <<endl;
	for(int i : v){
		start[i] = mem[(start[i] - 'a' + 1)%26];
		cout << start << endl;
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

