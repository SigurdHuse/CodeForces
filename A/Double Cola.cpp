#include <bits/stdc++.h>
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++)  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,time = 1; 
	cin >> n;
	// five people
	if(n <= 5) n--;
	while(n - time*5 > 0){
		n -= time*5;
		time <<= 1;
	}
	n /= time;
	if(n == 0) cout << "Sheldon" << endl;
	else if(n == 1) cout << "Leonard" << endl;
	else if(n == 2) cout << "Penny" << endl;
	else if(n == 3) cout << "Rajesh" << endl;
	else cout << "Howard" << endl;
}
