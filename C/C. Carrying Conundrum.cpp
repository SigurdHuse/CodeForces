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
	string s, s1, s2, s3;
	cin >> s;
	for(int i = 0; i < SZ(s); ++i){
		if(i & 1) s2 += s[i];
		else s1 += s[i];
	}
	if(s2.empty()){
		cout << stoi(s1) - 1 << endl;
		return;
	}
	cout << (stoi(s1) + 1)*(stoi(s2) + 1) - 2 << endl; 
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

