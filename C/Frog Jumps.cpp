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
		s += "R";
		int n = (int)s.size();
		int mi = INT_MIN, cnt = 1;
		REP(i, n){
			if(s[i] == 'L') cnt++;
			else{
				mi = max(mi, cnt);
				cnt = 1;
			}
		}
		cout << mi <<endl;
	}
}
