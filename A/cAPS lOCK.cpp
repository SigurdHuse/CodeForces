#include <bits/stdc++.h>
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++)  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int n = (int)s.size(), cnt = 0;
	for(char c : s)if(isupper(c)) cnt++;
	if(cnt == n){
		REP(i,n) s[i] = tolower(s[i]);
	}
	else if(islower(s[0]) && cnt == n-1){
		s[0] = toupper(s[0]);
		for(int i = 1;i<n;++i) s[i] = tolower(s[i]);
	}
	cout << s<< endl;
}
