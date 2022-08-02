#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

struct tower{
	int last, cnt, mx;
};

void solve(){
	int n; cin >> n;
	vector<tower> v(n);
	REP(i,n){
		v[i].last = -1;
		v[i].cnt = 0;
		v[i].mx = 0;
	}
	vector<int> a(n);
	for(auto &A : a){
		cin >> A; A--;
	}
	for(int i = 0; i < n; ++i){
		int cur = a[i];
		if(v[cur].last == -1){
			v[cur].last = i;
			v[cur].cnt = 1;
		}
		else if((i - v[cur].last)%2 == 1){
			v[cur].last = i;
			v[cur].cnt++;
		}
		else{
			v[cur].cnt = 1;
			v[cur].last = -1;
		}
		v[cur].mx = max(v[cur].cnt, v[cur].mx);
	}
	for(auto t : v) cout << t.mx << " ";
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

