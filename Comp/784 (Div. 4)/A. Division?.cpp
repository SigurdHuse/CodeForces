#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, rank = 1; cin >> n;
	if(n <= 1399) rank = 4;
	else if(n <= 1599) rank = 3;
	else if(n <= 1899) rank = 2;
	cout << "Division " << rank << endl;
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

