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
	vector<int> v;
	vector<vector<int>> t(n);
	
	int k, s = 0, c = n-1;
	
	for(int i = 0; i < n; ++i){
		cin >> k;
		vector<int> tmp(k);
		for(auto &a : tmp){
			cin >> a;
			v.push_back(a);
		}
		t[i] = tmp;
	}
	v.push_back(INT_MAX);
	sort(all(v));
	//for(int i : v) cout << i << " ";
	//cout << endl;
	for(int i = 0; i < n; ++i){
		auto it = lower_bound(all(v), t[i][0]);
		int idx = it - v.begin();
		k = SZ(t[i]);
		if(k == 1) continue;
		for(int j = 1; j < k; ++j){
			if(t[i][j] != v[idx+1]){
				s++;
				c++;
				it = lower_bound(all(v), t[i][j]);
				idx = it - v.begin();
			}
			else idx++;
		}
		
	}
	cout << s << " " << c << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

