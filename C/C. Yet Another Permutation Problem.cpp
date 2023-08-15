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
	//vector<int> tmp;
	vector<bool> used(n+1);
	for(int i = 1; i <= n; ++i){
		if(!used[i]){
			used[i] = 1;
			//tmp.push_back(i);
			cout << i << " ";
			int fac = i * 2;
			while(fac <= n){
				cout << fac << " ";
				used[fac] = 1;
				//tmp.push_back(fac);
				fac *= 2;
			}
		}
	}
	cout << "\n";
	//vector<int> test = {1, 2, 3, 4, 8, 5, 10, 6, 9, 7};
	//for(int i = 0; i < n; ++i){
	//	cout << __gcd(tmp[i], tmp[(i+1)%n]) << " ";
	//}
	//cout << "\n";
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

