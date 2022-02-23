#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t;
	cin >> t;
	int h, m;
	for(int _ = 0; _ < t; _ ++){
		cin >> h >> m;
		cout << (24 - h - (m > 0))*60 + 60*(m > 0) - m << endl;
	}
}
