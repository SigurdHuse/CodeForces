#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	string s; cin >> s;
	int n = (int)s.size();
	if(s[n-1] == 'a') s+= "b";
	else s += "a";
	int cnt = 0;
	for(int i = 0; i <n; ++i){
		cnt++;
		if(s[i] != s[i+1]){
			if(cnt <= 1){
				cout << "NO" <<endl;
				return;
			}
			cnt = 0;
		}	
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

