#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int n;
	cin >> n;
	vector<bool> mem(n + 2);
	for(int i = 2; i < n; i++){
		for(int j = 2; j < n; j++){
			int tmp = i*j;
			if(tmp <= n){
				mem[tmp] = 1;
			}
			else break;
		}
	}
	for(int i = n - 4; i > -1; i--){
		if(mem[i]){
			if(mem[n - i]){
				cout << i << " " << n-i << endl;
				break;
			}
		}
	}
}
