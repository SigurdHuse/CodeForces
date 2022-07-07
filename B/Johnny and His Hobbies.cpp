#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

const int N = 1025;

int n;
int in[N];
bool is[N];

bool check(int k){
	for(int i = 1; i <= n; ++i)
		if(!is[in[i]^k]) return false;
	return true;
}

void solve(){
	for(int i = 0; i< N;++i) is[i] = false;
	cin >> n;
	for(int i = 1; i<= n;++i){
		cin >> in[i];
		is[in[i]] = true;
	}
	for(int i = 1; i < 1024;++i){
		if(check(i)){
			cout << i << endl;
			return;
		}
	}
	cout << -1 << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		solve();
	}
}

