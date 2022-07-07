#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n, tmp;
	int c25 = 0, c50 = 0;
	cin >> n;
	REP(i,n){
		cin >> tmp;
		if(tmp == 25) c25++;
		else if(tmp == 50){
			if(c25 > 0){
				c25--;
				c50++;
			}
			else{
				cout << "NO" <<endl;
				return;
			}
		}
		else{
			if(c25 == 0){
				cout << "NO" << endl;
				return;
			}
			else{
				if(c50 > 0){
					c25--;
					c50--;
				}
				else if(c25 >= 3){
					c25-= 3;
				}
				else{
					cout << "NO" << endl;
					return;
				}
			}
		}
	}
	cout << "YES" <<endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

