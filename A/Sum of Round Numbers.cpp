#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t, n;
	cin >> t;
	for(int i = 0; i< t; i ++){
		cin >> n;
		int fac = 1, cnt = 0;
		vector<int> mem;
		while(n){
			if(n % 10){
				mem.push_back(fac * (n%10));
				cnt++;
			}
			fac *= 10;
			n /= 10;
		}
		cout << cnt <<endl;
		for(int j : mem) cout << j << " ";
		cout << endl;
	}
}
