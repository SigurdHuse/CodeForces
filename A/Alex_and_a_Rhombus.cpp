#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int n; 
	cin >> n;
	int start = 1;
	for(int i = 1; i< n; i++){
		start += i * 4;
	}
	cout << start << endl;
}
