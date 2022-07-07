#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	string s; cin >> s;
	int n = (int)s.size();
	if(s[n-1] == 'A' || s[0] == 'B' || n == 1){
		cout << "NO" << endl;
		return;
	}
	int a_count = 1, b_count = 0;
	bool a = 1;
	for(int i = 1; i< n;++i){
		if(s[i] == 'A' && a) a_count++;
		else if(s[i] == 'B'){
			a = 0;
			b_count++;
		}
		else{
			if(b_count > a_count){
				cout << "NO" << endl;
				return;
			}
			b_count = 0;
			a_count = 1;
			a = 1;
		}
	}
	if(b_count > a_count){
		cout << "NO" << endl;
		return;
	}
	cout << "YES" << endl;
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

