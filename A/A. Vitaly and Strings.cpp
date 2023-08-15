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
	string s, t; cin >> s >> t;
	string ans = s;
	int n = s.size();
	for(int i = n-1; i >= 0; i--){
		if(ans[i] == 'z') ans[i] = 'a';
		else{
			ans[i] = ans[i] + 1;
			break;
		}
	}
	bool ok = (ans > s) && (ans< t);
	cout << (ok ? ans : "No such string") <<endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

