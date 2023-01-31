#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	vector<pair<int,char>> cnt(26);
	REP(i,26) cnt[i].s = '0';
	for(char c : s){
		cnt[c - 'a'].f++;
		cnt[c - 'a'].s = c;
	}
	sort(all(cnt));
	int wanted = 0, keep = 1, mx = INT_MAX;
	
	for(int i = 0; i < 26; ++i){
		if(cnt[i].f == 0)break;
		wanted++;
		if(n % wanted != 0) continue;
		if(26*wanted < n) continue;
		int diff = n / wanted, diff_cnt = 0;
		for(int j = 0; j < wanted; ++j){
			diff_cnt += abs(cnt[j].f - diff);
		}
		if(diff_cnt < mx){
			keep = wanted;
		}
	}
	int final_cnt = n / keep, ans = 0;
	keep--;
	for(int i = 0; i < n; ++i){
		if(cnt[s[i] - 'a'].f != final_cnt){
			s[i] = cnt[keep].s;
			cnt[s[i] - 'a'].f--;
			cnt[keep].f++;
			if(s[i] - 'a' != keep) ans++;
		}
		while(keep >= 0 && (cnt[keep].f == final_cnt)) keep--;
	}
	cout << ans << endl;
	cout << s << endl;
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

