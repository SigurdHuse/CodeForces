#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int n;
	cin >> n;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	int ans = 0, cnt = 0, mx_cnt = 0;
	for(int i : v){
		if(i == 1){
			ans++;
			cnt--;
		}
		else cnt++;
		mx_cnt = max(mx_cnt, cnt);
		cnt = max(cnt, 0);
	}
	cout << (mx_cnt == 0 ? ans-1 : ans + mx_cnt) << endl;
}
