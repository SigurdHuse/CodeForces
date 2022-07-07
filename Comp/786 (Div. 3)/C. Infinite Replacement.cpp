#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

vector<vector<ll>> C(51,vector<ll>(51));

void fill_bin()
{	
	int n= 50, k = 50;
    int i, j;
 
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= min(i, k); j++) {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
}


void solve(){
	string s, t; cin>> s >> t;
	ll n1 = s.size(), n2 = t.size();
	if(n2 == 1 && t[0] == 'a'){
		cout << 1 << endl;
		return;
	}
	bool has_a = 0;
	for(int i = 0; i< n2; ++i) if(t[i] == 'a')has_a = 1;
	if(has_a){
		cout << -1 << endl;
	}
	else{
		ll ans = 0;
		for(ll j = 0; j <= n1; ++j){
			ans += C[n1][j];
		}
		cout << ans << endl;
	}
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	fill_bin();
	while(tt--){
		solve();
	}
}

