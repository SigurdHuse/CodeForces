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
	vector<int> v(n);
	vector<int> cnt(n+1);
	REP(i,n+1) cnt[i] = 0;
	for(auto &x : v){
		cin >> x;
		cnt[x]++;
	}
	sort(all(v));
	
	int mex = 0, extra = 0;
	for(int i = 0; i < n; ++i){
		if(v[i] == mex)mex++;
	}
	
	
	priority_queue<int,vector<int>,greater<int>> q;
	for(int i = 0; i <= n; ++i){
		if(i < mex){
			extra += cnt[i] -1;
			q.push(cnt[i]);
		}
		else extra += cnt[i];
	}
	

	
	cout << "1 "; 
	int mi = v[0], cur = 1, idx = v[0];
	for(int k = 1; k < n; ++k){
		//cout << mi << " " << mx << endl;
		while(!q.empty() && q.top() <= k){
			cur++;
			q.pop();
		}
		if(extra >= k){
			cout << cur <<" ";
		}
		else{
			cout << max(1,cur - k + extra) << " ";
		}
	}
	cout << "1\n";
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

