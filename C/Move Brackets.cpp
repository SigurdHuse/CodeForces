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
	while(tt--){
		int n, cnt = 0, ans = 0;
		string s;
		cin>> n>> s;
		for(char c : s){
			if(c == '(')cnt ++;
			else cnt --;
			if(cnt < 0){
				ans = min(ans, cnt);
			}
		}
		cout << -ans << endl;
	}
}
