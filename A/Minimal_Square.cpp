#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t, a, b;
	cin >> t;
	for(int i = 0; i< t; i++){
		cin >> a >> b;
		int tmp = min(a,b)*2;
		if(max(a,b) > tmp) tmp = max(a,b);
		cout << tmp*tmp<<endl;
	}
}
