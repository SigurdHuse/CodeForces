#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int ten_mod(int n){
	int ans = 1, cur = 10;
	while(n > 0){
		if(n & 1) ans = (ans * cur) % 8;
		cur = (cur * cur) % 8;
		n /= 2;
	}
	return ans;
}

void solve(){
	string s; cin >> s;
	int n = SZ(s);
	
	for(int i = 0; i < n; ++i){
		int one = s[i] - '0';
		if(one % 8 == 0){
			cout << "YES" << endl;
			cout << s[i] << endl;
			return;
		}
		for(int j = i + 1; j < n; ++j){
			int two = s[j] - '0';
			if((10 * one + two) % 8 == 0){
				cout << "YES" << endl;
				cout << s[i] << s[j] << endl;
				return;
			}
			for(int k = j+1; k < n; ++k){
				int tre = s[k] - '0';
				//cout<< s[i] << s[j] << s[k] << endl;
				if((100*one + 10*two + tre)%8 == 0){
					cout << "YES" << endl;
					cout<< s[i] << s[j] << s[k] << endl;
					return;
				}
			}
		}
	}
	cout << "NO" << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

