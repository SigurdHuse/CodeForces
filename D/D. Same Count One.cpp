#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

struct Node{
	vector<int> v;
	int one_cnt = 0, idx;
	
	bool operator<(const Node& rhs){
		return one_cnt < rhs.one_cnt;
	}
	
};

void solve(){
	int n, m; cin >> n >> m;
	vector<Node> lines(n);
	
	vector<int> tmp(m);
	int total = 0;
	for(int i = 0; i < n; ++i){
		int cnt = 0;
		for(auto &a : tmp){
			cin >> a;
			cnt += a;
		}
		lines[i].v = tmp;
		lines[i].one_cnt = cnt;
		lines[i].idx = i+1;
		total += cnt;
	}
	if(total % n != 0){
		cout << -1 << endl;
		return;
	}
	int desired = total / n;
	int l = 0, r = n-1;
	
	vector<tuple<int,int,int>> ops;
	tuple<int,int,int> k;
	sort(all(lines));
	int idx = -1;
	while(l < r){
		while((lines[l].one_cnt < desired) && (lines[r].one_cnt > desired)){
			idx++;
			idx %= m;
			if(lines[r].v[idx] > lines[l].v[idx]){
				k = {lines[r].idx, lines[l].idx,idx+1};
				lines[r].v[idx] = 0;
				lines[l].v[idx] = 1;
				ops.push_back(k);
				lines[r].one_cnt--;
				lines[l].one_cnt++;
			}
			if(lines[l].one_cnt == desired) l++;
			if(lines[r].one_cnt == desired){
				r--;
				idx = 0;
			}
		}
		if(lines[l].one_cnt == desired) l++;
		if(lines[r].one_cnt == desired){
			r--;
			idx = 0;
		}
	}
	
	cout << SZ(ops) << endl;
	for(auto &e : ops){
		cout << get<0>(e) << " " << get<1>(e) << " " << get<2>(e) << endl; 
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

