#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	
	int n; cin >> n;
	
	if(n == 3){
		cout << "NO" << endl;
		return;
	}
	
	if(n & 1){
		cout << "YES" << endl;
		int first = (n - 3) / 2;
		int second = -(n-1)/2;
		
		for(int i = 0; i <n; ++i){
			if(i & 1) cout << second;
			else cout << first;
			if(i < n-1) cout << " ";
		}
		cout << endl;
		
	}
	else{
		cout << "YES" << endl;
		for(int i = 0; i < n; ++i){
			if(i & 1) cout << -1;
			else cout << 1;
			
			if(i < n-1) cout << " ";
		}
		cout << endl;
	}
	
	/*
	for(int i = -5000; i <= 5000; ++i){
		if(i == 0) continue;
		for(int j = -5000; j <= 5000; ++j){
			if(j == 0) continue;
			if(5*i + 4*j == i +j) cout << i << " " << j << endl;
			
			
		}
	}
	*/
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

