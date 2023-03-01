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
	int n, w, h; cin >> n >> w >> h;
	
	vector<int> cake(n), disp(n);
	for(auto &a : cake) cin >> a;
	for(auto &a : disp) cin >> a;
	
	int off = disp[0] - cake[0];
	
	for(int i = 0; i < n; ++i) cake[i] += off;
	// To begin with the first dispenser is 
	// in the middle of the first cake
	
	// We then check how far to the left and to the
	// right can we move the dispenser and still hit the cake
	
	int left = 0, right = 0;
	
	for(int i = 1; i < n; ++i){
		if(disp[i] > cake[i]){
			left = max(left, disp[i] - cake[i] - w + h);
			//mx_left = min(mx_left, disp[i] - cake[i] + h - w);
		}
		else{
			right = max(right, cake[i] - disp[i] - w + h);
			//mx_left = min(mx_left, cake[i] - disp[i] - mx_right + w - h);
			//mx_right = min(mx_right, cake[i] - disp[i] - h + w);
		}
	}
	if((left > w - h) || (right > w- h)){
		cout << "NO\n";
		return;
	}
	if((left > 0) && (right > 0)){
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
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

