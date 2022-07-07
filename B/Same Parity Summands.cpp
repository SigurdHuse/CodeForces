#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n, k;
	cin >> n >> k;
	if((n%2 && (k%2 == 0)) || (k > n))cout << "NO" << endl;
	else{
		if(n % 2){
			cout << "YES" << endl;
			REP(i,k-1) cout << "1 ";
			cout <<  n - k + 1 << endl;
		}
		else{
			if(k%2 == 0 && 2*k > n) cout << "NO" <<endl;
			else{
				cout << "YES" << endl;
				if(k%2){
					REP(i,k-1)cout << "2 ";
					cout << n - 2*(k -1) << endl;
				}
				else{
					REP(i,k-1)cout << "1 ";
					cout << n - k +1 << endl;
				}
			}
		}
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

