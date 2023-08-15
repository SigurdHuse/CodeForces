#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 500*501;


void solve(){
	int n, l, r, s;
	cin >> n >> l >> r >> s;
	int des = r - l + 1;
	int mx = n*(n+1)/2 - (n - des)*(n - des + 1)/2;
	int mi = des*(des + 1)/2;
	
	if(s < mi || s > mx){
		cout << -1 << endl;
		return;
	}
	vector<int> cand(des);
	int idx = 0, tmp = n;
	for(int i = des-1; i >= 0; --i){
		cand[i] = tmp; tmp--;
	}
	int cur_s = mx;
	while(cur_s > s){
		cand[idx]--;
		cur_s--;
		idx = (idx + 1) % des;
	}
	vector<bool> used(n+1);
	REP(i, des) used[cand[i]] = 1;
	//for(auto &x : cand) cout << x << " ";
	//cout << endl;
	int cur= 1;
	
	for(int i = 1; i < l; ++i){
		while(used[cur]) cur++;
		cout << cur << " ";
		cur++;
	}
	
	for(int i = 0; i < des; ++i){
		cout << cand[i] << " ";
	}
	
	for(int i = r+1; i <= n; ++i){
		while(used[cur]) cur++;
		cout << cur << " ";
		cur++;
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

