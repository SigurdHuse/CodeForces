#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n, k, goal; cin >> n >> k; 
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	sort(all(v));
	int ans = INT_MAX;
	for(int i = 0; i< n; ++i){
		int cnt = 1;
		for(int j = i+1; j < n; ++j){
			if(v[i] == v[j]){
				cnt++;
			}
			if(cnt == k){
				cout << "0" << endl;
				return;
			}
		}
	}
	for(int i = 0; i< n; ++i){
		int same = 1, steps = 0;
		if(v[i] % 2) goal = v[i] / 2;
		else goal = v[i];
		for(int j = i+1;j < n; ++j){
			int tmp = v[j], cnt = 0;
			while(tmp > goal){
				tmp /= 2;
				cnt++;
			}
			if(tmp == goal){
				same++;
				steps += cnt;
			}
			if(same == k) break;
		}
		if(same == k)ans = min(ans, steps);
	}
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

