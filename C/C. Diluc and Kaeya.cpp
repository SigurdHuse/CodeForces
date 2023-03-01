#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

pair<int,int> getRatio(int a, int b){
	int g = __gcd(a,b);
	a /= g;
	b /= g;
	return {a,b};
}

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	
	int d = 0, k = 0;
	map<pair<int,int>, int> mp;
	for(char c : s){
		if(c == 'D') d++;
		else k++;
		cout << ++mp[getRatio(d,k)] << " ";
	}
	cout << endl;
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

