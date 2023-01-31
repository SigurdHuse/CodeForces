#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	if(n != 5){
		cout << "NO" << endl;
		return;
	}
	string name = "Timur";
	vector<int> mem(256);
	for(char c : s){
		mem[(int)c]++;
	}
	for(char c : name) mem[(int)c]--;
	for(int i : mem){
		if(i != 0){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
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

