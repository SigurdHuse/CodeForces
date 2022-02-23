#include <bits/stdc++.h> 
using ll = long long; 
using namespace std; 

int main()
{
	int t, cnt;
	cin >> t;
	ll a, b, n;
	for(int _ = 0; _ < t; _ ++){
		cin >> a >> b >> n;
		cnt = 0;
		bool bo = 0;
		if(a > b) swap(a,b);
		while(b <= n && a <= n){
			cnt++;
			if(b + a > n) break;
			if(bo) b += a;
			else a += b;
			bo ^= 1;
		}
		cout << cnt << endl;
	}
}
