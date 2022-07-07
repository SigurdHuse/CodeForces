#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	int red = 0, blue = 0;
	for(char c : s){
		if(c == 'R') red++;
		else if(c == 'B') blue++;
		else{
			if((red != 0 && blue == 0) ||(blue != 0 && red == 0)){
				cout << "NO" << endl;
				return;
			}
			red = 0; blue = 0;
		}
	}
	if(red != 0 && blue == 0){
		cout << "NO" << endl;
		return;
	}
	if(blue != 0 && red == 0){
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

