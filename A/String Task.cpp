#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s, ans = "";
	cin >> s;
	for(int i = 0; i < (int)s.size();++i){
		s[i] = tolower(s[i]);
		if(s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i') continue;
		ans += '.';
		ans += s[i];
	}
	cout << ans <<endl;
}
