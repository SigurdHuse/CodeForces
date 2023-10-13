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
	int tmp = n;
	vector<int> v(n);
	bool flag = 1;
	for(auto &x : v){
		cin >> x;
		if(x == 0) flag = 0;
	}
	if(flag){
		cout << "YES\n";
		return;
	}
	vector<int> facs;
	
	for(int i = n/2 - 1; i >= 2; --i){
		if(n % i == 0){
			facs.push_back(i);
		}
	}
	for(auto &fac : facs){
		for(int start = 0; start < fac; ++start){
			flag = 1;
			for(int i = start; i < n; i += fac){
				if(v[i] == 0){
					flag = 0;
					break;
				}
			}
			if(flag){
				cout << "YES\n";
				return;
			}
		}
	}
	cout << "NO\n";
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

