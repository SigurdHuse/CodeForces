#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, L, a, t_i, l_i;
	cin >> n >> L >> a;
	int cnt = 0, last = 0;
	for(int i= 0; i< n;++i){
		cin >> t_i >> l_i;
		cnt+= (t_i - last)/a;
		last = t_i + l_i;
	}
	cnt+=(L - last)/a;
	cout << cnt << endl;
}
