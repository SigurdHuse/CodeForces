#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

vector<string> pos;
int n;


void fill_pos(string s, int cnt = 0){
	if(SZ(s) == n){
		if(cnt > 1) pos.push_back(s);
		return;
	}
	fill_pos(s + "0", cnt);
	fill_pos(s + "1", cnt + 1);
}

void solve(){
	int l, r, x; cin >> n >> l >> r >> x;
	int ans = 0;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	fill_pos("", 0);
	
	for(string s : pos){
		//cout << s << endl;
		int mi = INT_MAX, mx = INT_MIN, cnt = 0;
		for(int i = 0; i < n; ++i){
			if(s[i] == '1'){
				mi = min(mi, v[i]);
				mx = max(mx, v[i]);
				cnt += v[i];
			}
		}
		//cout << mi << " " << mx << " " << cnt << endl;
		if((cnt >= l) && (cnt <= r) && (mx - mi >= x)) ans++;
	}
	
	
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

