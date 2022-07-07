#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	string s; cin >> s;
	int n = (int)s.size() - 1;
	int l = 0, r = n;
	while(l != r){
		if(s[l] == n + 'a')l++;
		else if(s[r] == n+'a') r--;
		else{
			cout << "NO" << endl;
			return;
		}
		n--;
	}
	if(s[r] == 'a') cout << "YES" << endl;
	else cout << "NO" << endl;
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

