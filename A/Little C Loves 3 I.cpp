#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int a, b, c, extra = n % 3;
	if(extra == 0){
		a = n/3;
		b = a;
		c = a;
		if(a%3 == 0){
			a-=2;
			b++;
			c++;
		}
	} 
	else if(extra == 2){
		a = 1;
		b = 2;
		c = n - 3;
	}
	else{
		a = 1; 
		b = 1; 
		c = n-2;
	}
	cout << a << " " << b << " " << c << endl;
}
