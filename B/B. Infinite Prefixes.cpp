#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2e5 + 1000;


void solve(){
	int n, x; cin >> n >> x;
	string s; cin >> s;
	int ans = 0;
	
	bool infAns = false;
	int cntZeros = (int)count(all(s), '0');
	int total = cntZeros - (n - cntZeros);
	
	int bal = 0;
	
	for(int i = 0; i < n; ++i){
		if(total == 0){
			if(bal == x) infAns = true;
		}
		else if(abs(x - bal) % abs(total) == 0){
			if((x  - bal) / total >= 0) ans++;
		}
		
		if(s[i] == '0') bal++;
		else bal--;
		
	}
	
	cout << (infAns ? -1 : ans) << endl;
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

