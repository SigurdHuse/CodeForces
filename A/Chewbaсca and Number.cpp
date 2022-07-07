#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	unsigned long long x;
	string new_number = "";
	cin >> x;
	while(x){
		int d = x%10;
		new_number += to_string(min(d, 9 -d));
		x/= 10;
	}
	reverse(new_number.begin(), new_number.end());
	//int n = (int)new_number.size();
	if(new_number[0] == '0')new_number[0] = '9';
	cout << new_number <<endl;
}
