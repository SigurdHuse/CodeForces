#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const ll M = 1e9 + 7;

void solve(){
	int n; cin >> n;
	vector<ll> v(n);
	for(auto &x : v) cin >> x;
	
	if(n == 2){
		cout << (v[0] + v[1]) % M << endl;
		return;
	}
	
	for(int i = 0; i < n-2; ++i){
		sort(all(v));
		int n1 = SZ(v) - 1;
		vector<ll> tmp(n1);
		
		int l = 0, r = 1, idx = 0;
		vector<pair<int,int>> seen;
		while(idx < n1){
			if(l == n1 + 1){
				l = 0;
				r = 1;
			}
			else if(r == n1+1){
				l++;
				r = l+1;
			}
			else if(v[l+1] + v[l+2] < v[l] + v[r]){
				l++;
				r = l+1;
			}
			tmp[idx] = v[l] + v[r];
			seen.insert({l,r})
			r++;
			idx++;
		}
		//for(int k : tmp) cout << k << " ";
		//cout << endl;
		v = tmp;
	}
	//cout << SZ(v) << endl;
	cout << (v[0] + v[1]) % M << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

