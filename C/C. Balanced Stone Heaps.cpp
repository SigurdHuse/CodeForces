#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int maxn = 201010;
int n;
int h[maxn];

bool check(int x){
	vector<int> cur_h(h, h + n);
	for(int i = n-1; i >= 2; --i){
		if(cur_h[i] < x) return false;
		int d = min(h[i], cur_h[i] - x)/3;
		cur_h[i-1] += d;
		cur_h[i-2] += 2*d;
	}
	return cur_h[0] >= x and cur_h[1] >= x;
}

void solve(){
	cin >> n;
	REP(i,n) cin >> h[i];
	int l = 0, r = *max_element(h, h + n);
	
	while(l < r){
		int mid = l + (r - l + 1)/2;
		if(check(mid)) l = mid;
		else r = mid - 1;
	}
	cout << l << endl;
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

