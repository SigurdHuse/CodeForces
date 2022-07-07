#include <bits/stdc++.h>
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++)  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m,a;
	cin >> n >> m;
	vector<int> dp(n);
	unordered_map<int,int> mem;
	REP(i,n){
		cin >> a;
		mem[a]++;
		dp[i] = a;
	}
	int k = mem.size();
	REP(i,n){
		int tmp = dp[i];
		dp[i] = k;
		mem[tmp]--;
		if(mem[tmp] == 0)k--;
	}
	REP(i,m){
		cin >> a;
		a--;
		cout << dp[a] <<endl;
	}
}
