#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	int t;
	string s;
	cin >> t;
	for(int _ = 0; _ < t; _ ++){
		cin >> s;
		int one = 0, two = 0, tre = 0;
		for(char c : s){
			if(c == 'A') one++;
			else if(c == 'B')two++;
			else tre++;
		}
		if(one + tre == two) cout << "YES" << endl;
		else cout << "NO" <<endl;
	}
}
