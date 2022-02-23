#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

ll f(ll x){return x*x + 100*x + x/3;}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll d;
	cin >> d;
	ll left = 0, right = 1000000000, mid;
	while(left <= right){
		mid = left + (right - left)/2;
		if(f(mid) == d){
			break;
		}
		if(f(mid) > d) right = mid -1;
		else left = mid + 1;
	}
	cout << mid <<endl;
}
