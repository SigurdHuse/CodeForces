#include <bits/stdc++.h> 
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++) 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt,n;
	string s;
	cin >> tt;
	while(tt--){
		cin >> n >> s;
		int angle = 0;
		for(char c : s){
			if(c == '1') angle --;
			else angle++;
		}
		while(angle < 0) angle += 4;
		angle %=4;
		if(angle == 0) cout << "E" <<endl;
		else if(angle == 1) cout << "S" <<endl;
		else if(angle == 2) cout << "W" <<endl;
		else  cout << "N" <<endl;
	}
}
