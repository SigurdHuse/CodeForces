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
	for(auto &a : v) cin >> a;
	int l = 0, r = n-1, a = 0, b = 0;
	int last_a = 0, last_b = 0;
	
	bool turn = 0;
	int turns = 0;
	while(l <= r){
		int cur_a = 0, cur_b = 0;
		if(!turn){
			while(l <= r && cur_a <= last_b){
				cur_a += v[l];
				l++;
			}
			a += cur_a;
			last_a = cur_a;
		}
		else{
			while(l <= r && cur_b <= last_a){
				cur_b += v[r];
				r--;
			}
			b += cur_b;
			last_b = cur_b;
		}
		turns++;
		turn ^= 1;
	}
	cout <<turns << " "<< a <<" "<< b << endl;
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

