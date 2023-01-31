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
	int m, s; cin >> m >> s;
	if((s == 0) && (m == 1)){
		cout << "0 0" << endl;
		return;
	}
	
	if((s == 0) || (s > 9*m)){
		cout << "-1 -1" << endl;
		return;
	}
	string mi = "", mx = "";
	int left = s;
	for(int i = 0; i< m; ++i){
		if(left <= 9){
			mx += to_string(left);
			left = 0;
		}
		else{
			mx += "9";
			left -= 9;
		}
	}
	left = s;
	for(int i = 0; i < m-1; ++i){
		if(left == 1) mi += "0";
		else if(left <= 9){
			mi += to_string(left - 1);
			left = 1;
		}
		else{
			mi += "9";
			left -= 9;
		}
	}
	if(left > 1) mi += to_string(left);
	else mi += "1";
	reverse(all(mi));
	
	cout << mi << " " << mx << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

