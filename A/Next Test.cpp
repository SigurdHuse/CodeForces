#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n, tmp;
	cin >> n;
	vector<int> v(3002);
	REP(i,3002) v[i] = i;
	v[0] = 6000;
	REP(i,n){
		cin >> tmp;
		v[tmp] = 6000;
	}
	cout << *min_element(v.begin(),v.end()) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

