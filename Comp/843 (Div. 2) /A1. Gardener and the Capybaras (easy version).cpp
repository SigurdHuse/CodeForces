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
	string s, a, b, c; cin >> s;
	int n = SZ(s);
	
	a = s[0];
	c = s[n-1];
	b = s.substr(1,n-2);
	
	for(int i = n-2; i > 1; --i){
		if((a <= b) && (c <= b)){
			cout << a << " " << b << " " << c << endl;
			return;
		}
		if((b <= a) && (b <= c)){
			cout << a << " " << b << " " << c << endl;
			return;
		}
		b.pop_back();
		c = s[i] + c;
	}
	if((a <= b) && (c <= b)){
		cout << a << " " << b << " " << c << endl;
		return;
	}
	if((b <= a) && (b <= c)){
		cout << a << " " << b << " " << c << endl;
		return;
	}
	
	
	cout << ":(" << endl;
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

