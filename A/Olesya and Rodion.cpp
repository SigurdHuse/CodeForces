#include <bits/stdc++.h>
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++)  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,t;
	cin >> n >> t;
	string num = "1";
	if(n == 1 && t == 10) cout << -1 << endl;
	else if(n == 1) cout << t << endl;
	else{
		REP(i,n-2) num += '0';
		if(t == 3 || t == 6) num += "2";
		else if(n == 2 && t == 4) num += "2";
		else if(n == 2 && t == 8) num += "6";
		else if(n == 3 && t == 8) num += "4";
		else if(t == 2 || t == 4 || t == 8 || t == 5||t == 10) num += "0";
		else if(t == 9) num += "8";
		else if(t == 7){
			num += "0";
			num[0] = '7';
		}
		cout << num << endl;
	}
}
