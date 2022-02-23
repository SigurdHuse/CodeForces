#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t;
	cin >> t;
	long long a, b;
	for(int _ = 0; _ < t; _++){
		cin>> a >> b;
		if(a == b)cout << 0 << endl;
		else if(a > b){
			if((a-b)%2) cout << 2 << endl;
			else cout << 1 << endl;
		}
		else{
			if((b-a)%2) cout << 1 << endl;
			else cout << 2 << endl;
		}
	}
}
