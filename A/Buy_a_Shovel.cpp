#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int k, r, cnt = 1;
	cin >> k >> r;
	long long int s = k;
	while(s % 10 != r && s % 10 != 0){
		s += k;
		cnt ++;
	}
	cout << cnt << endl;
}
