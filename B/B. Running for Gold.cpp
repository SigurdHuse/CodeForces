#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int compare_two(vector<int>& v1, vector<int>& v2){
	int cnt = 0;
	for(int i = 0; i < 5; ++i){
		if(v1[i] < v2[i]) cnt++;
	}
	return (cnt >= 3);
}

void solve(){
	int n; cin >> n;
	vector<vector<int>> scores(n, vector<int>(5));
	
	int gold = 0;
	
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < 5; ++j){
			cin >> scores[i][j];
		}
		if(compare_two(scores[i],scores[gold])) gold = i;
	}
	
	for(int i = 0; i < n; ++i){
		if(i == gold) continue;
		if(compare_two(scores[i], scores[gold])){
			cout << -1 << endl;
			return;
		}
	}
	cout << gold +1 << endl;
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

