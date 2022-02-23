#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	for(int i = 0; i< (int)s.size();++i){
		if(s[i] == 'a') s[i] = '4';
		else if(s[i] == 'i') s[i] = '1';
		else if(s[i] == 'e') s[i] = '3';
		else if(s[i] == 'o') s[i] = '0';
		else if(s[i] == 's') s[i] = '5';
	}
	cout << s <<endl;
}
