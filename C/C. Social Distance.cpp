#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Count segments of 0 of length k+1

void solve(){
	int n, k; cin >> n >> k;
	string s; cin >> s;
	
	int res = 0;
	
	for(int i = 0; i <n; ++i){
		int j = i+1;
		for(; j < n && s[j] != '1'; ++j);
		
		int left = s[i] == '1' ? k : 0;
		int right = j < n && s[j] == '1' ? k : 0;
		int len = j-1;
		
		if(left == k) len--;
		
		len -= left + right;
		
		if(len > 0){
			res += (len + k) / (k+1);
		}
		i = j;
	}
	cout << res << endl;
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

