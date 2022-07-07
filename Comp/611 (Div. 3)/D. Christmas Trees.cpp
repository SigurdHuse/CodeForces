#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, m; cin >> n >>m;
	vector<int> x(n);
	REP(i,n) cin >> x[i];
	queue<int> q;
	map<int,int> d;
	for(int i = 0; i < n;++i){
		d[x[i]] = 0;
		q.push(x[i]);
	}
	ll ans = 0;
	vector<int> res;
	while(!q.empty()){
		if(int(res.size()) == m) break;
		int cur = q.front();
		q.pop();
		if(d[cur] != 0){
			ans += d[cur];
			res.push_back(cur);
		}
		if(!d.count(cur-1)){
			d[cur-1] = d[cur] +1;
			q.push(cur-1);
		}
		if(!d.count(cur+1)){
			d[cur + 1] = d[cur] + 1;
			q.push(cur + 1);
		}
	}
	cout << ans << endl;
	for(int i : res) cout << i << " ";
	cout << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

