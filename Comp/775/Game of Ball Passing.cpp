#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n;
	ll s1 = 0, s2 = 0;
	cin >> n;
	vector<int> v(n);
	for(auto &x: v) cin>> x;
	sort(v.begin(),v.end());
	s2 = v[n-1];
	int cur = n-2;
	if(v[n-1] == 0) cout << 0 << endl;
	else{
		for(int i = 0; i<= cur;++i){
			if(s1 < s2) s1 += v[i];
			else{
				s2 += v[cur];
				cur--;
			}
			cout << s1 << " " << s2 << endl;
		}
		cout << max(max(s1,s2)-min(s1,s2)-1, 1ll) << endl;
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

