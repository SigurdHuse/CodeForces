#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int n,m, other = 0, ans = 0;
	cin >> n;;
	vector<int> boy(n);
	for(auto &x : boy) cin >> x;
	cin >> m;
	vector<int> girl(m);
	for(auto &x : girl) cin >> x;
	sort(boy.begin(), boy.end());
	sort(girl.begin(),girl.end());
	for(int i = 0; i< n;++i){
		while(other < m && abs(boy[i] - girl[other] > 1))other++;
		if(abs(boy[i] - girl[other]) <= 1){
			ans++;
			other++;
		}
	}
	cout << ans << endl;
}
