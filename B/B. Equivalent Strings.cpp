#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 



string smallest(string s){
	if(SZ(s) % 2 == 1) return s;
	string s1 = smallest(s.substr(0, SZ(s)/2));
	string s2 = smallest(s.substr(SZ(s)/2, SZ(s)));
	if(s1 < s2) return s1 + s2;
	else return s2 + s1;
}


void solve(){
	string a, b;
	cin >> a >> b;
	bool ans = (smallest(a) == smallest(b));
	cout << (ans ? "YES" : "NO") << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

