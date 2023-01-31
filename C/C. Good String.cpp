#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int brute(const string& s, int x, int y){
	int res = 0;
	for(auto c : s) if(c - '0' == x){
		res++;
		swap(x,y);
	}
	if(x != y && res % 2 == 1)res--;
	return res;
}

void solve(){
	string s; cin >> s;
	int ans = 0;
	for(int x = 0; x < 10; ++x){
		for(int y = 0; y < 10; ++y){
			ans = max(ans, brute(s,x,y));
		}
	}
	cout << SZ(s) - ans << endl;
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

