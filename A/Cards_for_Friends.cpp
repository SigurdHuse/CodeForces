#include <bits/stdc++.h> 
using namespace std; 

int main()
{
	int t, w, h;
	cin >> t;
	long long int n;
	for(int _ = 0; _ < t; _++){
		cin >> w >> h >> n;
		long long int cnt = 1;
		while((w % 2) == 0 || (h % 2)== 0){
			cnt *= 2;
			if((w % 2) == 0) w /= 2;
			else h /= 2;
		}
	
		if(cnt >= n) cout << "YES" << endl;
		else cout << "NO" <<endl;
	}
} 
