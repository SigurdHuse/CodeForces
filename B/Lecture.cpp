#include <bits/stdc++.h>
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++)  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	unordered_map<string,string> mem;
	string one, two;
	REP(i,m){
		cin >> one >> two;
		if((int)one.size() <= (int)two.size()){
			mem[one] = one;
		}
		else mem[one] = two;
	}
	string ans = "";
	REP(i,n){
		cin >> one;
		//cout << one << endl;
		ans += mem[one];
		ans += " ";
	}
	cout << ans << endl;
}
