#include <bits/stdc++.h> 
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++) 
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	string s;
	while(tt--){
		cin >> s;
		bool has_r = 0, has_g = 0, has_b = 0;
		bool possible = 1;
		for(char c : s){
			if(c == 'r') has_r = 1;
			else if(c == 'b')has_b = 1;
			else if(c == 'g')has_g = 1;
			else if(c == 'R' && !has_r)possible = 0;
			else if(c == 'B' && !has_b)possible = 0;
			else if(c == 'G' && !has_g)possible = 0;
		}
		cout << (possible ? "YES" : "NO") << endl;
	}
}
