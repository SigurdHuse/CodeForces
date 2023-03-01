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
	string a, b; cin >> a >> b;
	bool flipped = 0;
	int idx = n-1;
	for(int i = n-1; i > 0; --i){
		if(flipped){
			if(a[idx] == b[i]){
				if(a[0] == b[i]){
					a[0] = (a[i] == '1' ? '1' : '0');
					cout << 1 << " ";
				}
				cout << i+1 << " ";
				flipped ^= 1;
			}
		}
		else{
			if(a[i] != b[i]){
				if(a[0] == b[i]){
					a[0] = (a[i] == '1' ? '0' : '1');
					cout << 1 << " ";
				}
				cout << i+1 << " ";
				flipped ^= 1;
			}
		}
	}
	if(a[0] != b[0]) cout << "1 ";
	cout << endl;
	
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

