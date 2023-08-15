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
	
	if(n == 1){
		cout << s << endl;
		return;
	}
	
	
	auto it = min_element(s.begin(),s.end());
	
	if((*it) < s[0]){
		cout << *it;
		s.erase(it);
		cout << s << endl;
		return;
	}
	
	int i = 1;
	for(; i < n; ++i){
		if(s[i-1] < s[i]) break;
	}
	
	for(; i < n; ++i){
		if(s[i] == s[0]){
			cout << s[i];
			for(int j = 0; j < i; ++j){
				cout << s[j];
			}
			for(int j = i+1; j < n; ++j){
				cout << s[j];
			}
			cout << endl;
			return;
		}
	}
	cout << s << endl;
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

