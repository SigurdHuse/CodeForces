#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	REP(i,n) cin >> v[i];
	vector<int> cand;
	
	for(int i = 1; i < n; ++i){
		if(v[i] < v[i-1]){
			int tmp = v[i-1] - v[i];
			if(!(tmp & 1)){
				cand.push_back(v[i] + tmp / 2);
			}
			else{
				cand.push_back(v[i] + tmp/2 + 1);
			}
		}
	}
	if(SZ(cand) == 0){
		cout << 0 << endl;
		return;
	}
	sort(all(cand));
	int x = cand.back();
	//cout << x << endl;
	for(int i = 0; i < n; ++i){
		v[i] = abs(v[i] - x);
	}
	cout << (is_sorted(all(v)) ? x : -1) << endl;
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

