#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, cnt = 0;
	cin >> n;
	vector<int> f(n);
	vector<bool> mem(n+1);
	mem[0] = 1;
	for(auto &x : f){
		cin >> x;
		mem[x] = 1;
		if(x == 0) cnt++;
	}
	vector<int> need(cnt);
	int indx = 0;
	for(int i = 0; i< n + 1; ++i){
		if(!mem[i]){
			need[indx] = i;
			indx++;
		}
	}
	indx = cnt-1;
	for(int i = 0; i< n; ++i){
		if(f[i] == 0){
			f[i] = need[indx];
			indx--;
		}
	}
	for(int i : f) cout << i << " ";
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

