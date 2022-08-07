#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

const int N = 1e6;

vector<bool> squares(N);

void fill_squares(){
	for(int i = 0; i < 1000; ++i) squares[i*i] = 1;
}

void solve(){
	int n; cin >> n;
	vector<int> v(n,-1);
	set<int, greater<int>> indx;
	REP(i,n) indx.insert(i);
	for(int i = n-1; i > -1; --i){
		bool ok = 0;
		for(int j : indx){
			if(squares[i+j] && v[j] == -1){
				v[j] = i;
				indx.erase(j);
				ok = 1;
				break;
			}
		}
		if(!ok){
			cout << -1 << endl;
			return;
		}
	}
	for(int k : v) cout << k << " ";
	cout << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	fill_squares();
	while(tt--){
		solve();
	}
}

