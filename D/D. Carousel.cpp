#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2e5 + 10;

vector<set<int>> G(N);

int a[N];

void solve(){
	int n; cin >> n;
	
	//vector<int> ans(n+1, 0);
	cin >> a[0];
	bool uniq = 1;
	
	for(int i = 1; i < n; ++i){
		cin >> a[i];
		if(a[i] != a[i-1]) uniq = 0;
	}
	if(uniq){
		cout << "1\n";
		REP(i,n) cout << "1 ";
		cout << "\n";
		return;
	}
	
	
	if(n % 2 == 0){
		cout << "2\n";
		for(int i = 0; i < n; ++i){
			cout << i % 2 + 1 << " ";
		}
		cout << "\n";
		return;
	}
	for(int i = 0; i < n; ++i){
		if(a[i] == a[(i+1) % n]){
			vector<int> ans(n);
			for(int j = 0, pos = i+1; pos < n; ++pos, j^=1){
				ans[pos] = j +1;
			}
			
			for(int j = 0, pos = i; pos >= 0; --pos, j^=1){
				ans[pos] = j +1;
			}
			cout << "2\n";
			for(int pos = 0; pos < n; ++pos){
				cout << ans[pos] << " ";
			}
			cout << "\n";
			return;
		}
	}
	
	cout << 3 << endl;
	for (int i = 0; i < n - 1; ++i) {
		cout << i % 2 + 1 << " ";
	}
	cout << 3 << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt; cin >> tt;
	while(tt--){
		solve();
	}
}

