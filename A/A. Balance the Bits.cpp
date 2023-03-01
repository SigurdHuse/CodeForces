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
	int n; cin >> n;
	string s; cin >> s;
	string a, b;
	int cnt = 0;
	for(int i = 0; i < n; ++i){
		cnt += (s[i] == '1');
	}
	if(cnt % 2 == 1 || s[0] == '0' || s.back() == '0'){
		cout << "NO" << endl;
		return;
	}
	int k = 0;
	bool flip = false;
	
	for(int i = 0; i < n; ++i){
		if(s[i] == '1'){
			a.push_back(2*k < cnt ? '(': ')');
			b.push_back(a.back());
			k++;
		}
		else{
			a.push_back(flip ? '(' : ')');
            b.push_back(flip ? ')' : '(');
            flip = !flip;
		}
	}
	cout << "YES\n" << a << "\n" << b << "\n";
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

