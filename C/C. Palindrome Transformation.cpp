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
	int n, p; cin >> n >> p;
	p--;
	string s; cin >> s;
	
	// Always optimal to go left then right
	bool off = 0;
	if(n & 1){
		if(p == (n/2 + 1)){
			p--;
			off = 1;
		}
	}
	
	
	int ans = INT_MAX, cnt = 0;
	
	if(p == n/2){
		for(int i = p; i >= 0; --i){
			cnt += (s[n-i-1] - s[i] + 26) % 26;
			cnt++;
		}
		cout << cnt + off << endl;
		return;
	}
	
	if(p < n/2){
		for(int i = p; i >= 0; --i){
			cnt += (s[n-i-1] - s[i] + 26) % 26;
			cnt++;
		}
		
	}
	else{
		
	}
	
	
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

