#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Need to check if alternate

void solve(){
	string s; cin >> s;
	int n = SZ(s);
	
	int a = 0, b = 0;
	for(int i =0; i < n; ++i){
		if(i &1 ){
			if(s[i] == '-') b++;
			else a++;
		}
		else{
			if(s[i] == '+') b++;
			else a++;
		}
	}
	
	cout << (a == b ? "Yes" : "No") << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

