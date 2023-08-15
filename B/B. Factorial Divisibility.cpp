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
	int n, x; cin >> n >> x;
	vector<int> cnt(x+1);
	int a;
	REP(i,n){
		cin >> a;
		cnt[a]++;
	}
	for(int i = 1; i < x; ++i){
		if(cnt[i] % (i + 1) == 0){
			cnt[i+1] += (cnt[i] / (i+1));
		}
		else{
			cout << "No" << endl;
			return;
		}
	}
	cout << "Yes" << endl;
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

