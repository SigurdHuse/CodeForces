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
	int n= SZ(s);
	
	int mx = -1, idx = -1;
	int last = s[n-1];
	
	for(int i = n-2; i >= 0; --i){
		if(!((s[i] - '0') & 1)){
			if(mx == -1){
				mx = s[i] - '0';
				idx = i;
			}
			else if(last > s[i]){
				mx = s[i] - '0';
				idx = i;
			}
		}
	}
	if(idx == -1) cout << -1 << endl;
	else{
		swap(s[idx], s[n-1]);
		cout << s << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

