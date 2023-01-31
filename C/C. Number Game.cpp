#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

bool is_pow(int x){
	return (x & (x-1)) == 0;
}

void solve(){
	int n; cin >> n;
	if(n == 2){
		cout << "Ashishgup" << endl;
		return;
	}
	
	if((n == 1) || (n == 6) || is_pow(n)){
		cout << "FastestFinger" << endl;
	}
	else if((n == 2) || (n & 1) || (n % 4 == 0)){
		cout << "Ashishgup" << endl;
	}
	else{
		int cnt = 0;
		int tmp = n;
		while(n % 2 == 0) n /= 2;
		for(int i = 3; i*i <= tmp; i += 2){
			while(n % i == 0){
				cnt++;
				n /= i;
			}
		}
		if(n > 1) cnt++;
		cout << (cnt > 1 ? "Ashishgup":"FastestFinger") << endl; 
	}
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

