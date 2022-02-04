#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int x1, x2, x3;
	cin >> x1 >> x2 >> x3;
	int one = abs(x1 - x2) + abs(x1-x3);
	int two = abs(x2 - x1) + abs(x2 - x3);
	int three = abs(x3 - x1) + abs(x3 - x2);
	cout << min(three,min(one, two)) << endl;
}
