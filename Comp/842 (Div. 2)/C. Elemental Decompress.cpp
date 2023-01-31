#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2*1e5;

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	vector<bool> qc(N+1), pc(N+1);
	vector<int> q(n), p(n);
	
	for(int i = 0; i< n; ++i){
		if(!qc[v[i]]){
			q[i] = v[i];
			qc[v[i]] = 1;
		}
		else if(!pc[v[i]]){
			p[i] = v[i];
			pc[v[i]] = 1;
		}
		else{
			cout << "NO1" << endl;
			return;
		}
	}
	set<int> av_q, av_p;
	
	for(int i = 1; i<= n; ++i){
		if(!qc[i]) av_q.insert(i);
		if(!pc[i]) av_p.insert(i);
	}
	
	for(int i = 0; i < n; ++i){
		if(p[i] != 0){
			auto it = av_q.upper_bound(p[i]);
			if(it == av_q.begin() && SZ(av_q) == 1){
				cout << "NO" << endl;
				return;
			}
			if(it != av_q.begin()) it--;
			q[i] = *it;
			av_q.erase(it);
		}
		else if(q[i] != 0){
			auto it = av_p.lower_bound(q[i]);
			if(it == av_p.begin() && SZ(av_q) == 1){
				cout << "NO" << endl;
				return;
			}
			if(it != av_p.begin())it--;
			
			p[i] = *it;
			av_p.erase(it);
		}
		//cout << endl;
		//for(int k : p) cout << k << " ";
		//cout << endl;
		//for(int k : q) cout << k << " ";
		//cout << endl;
	}
	cout << "YES" << endl;
	for(int i : p) cout << i << " ";
	cout << endl;
	for(int i : q) cout << i << " ";
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

