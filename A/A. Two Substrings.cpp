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
	string s; cin >> s;
	int one = -1, two = -1;
	int n = SZ(s);
	
	for(int i =0; i < n-1; ++i){
		if(((s[i] == 'A')&& (s[i+1] == 'B'))){
			if(one == -1) one = i;
		}
		if(((s[i] == 'B')&& (s[i+1] == 'A'))){
			if(one != -1) two = i;
		}
		if((one != -1) && (two != -1)){
			if(abs(one - two) > 1){
				cout << "YES" << endl;
				return;
			}
		}
	}
	one = -1; two = -1;
	
	for(int i =0; i < n-1; ++i){
		if(((s[i] == 'A')&& (s[i+1] == 'B'))){
			if(two != -1) one = i;
		}
		if(((s[i] == 'B')&& (s[i+1] == 'A'))){
			if(two == -1) two = i;
		}
		if((one != -1) && (two != -1)){
			if(abs(one - two) > 1){
				cout << "YES" << endl;
				return;
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

