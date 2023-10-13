#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void ask(int &l, int &r){
	//cout.flush();
	cout << "? " << l << " " << r << "\n";
	cout.flush();
}

void solve(){
	int n; cin >> n;
	int l = 1, r = n;
	
	while(l < r){
		int mid = l + (r - l)/2;
		ask(l, mid);
		vector<int> v(r - l +1);
		int x;
		int correct = 0;
		for(int i = l; i <= mid; ++i){
			cin >> x;
			if(l <= x && x <= r) correct++;
		}
		if(correct & 1){
			r = mid;
		}
		else{
			l = mid + 1;
		}
	}
	cout << "! " << l << "\n";
	cout.flush();
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt; cin >> tt;
	while(tt--){
		solve();
	}
}

