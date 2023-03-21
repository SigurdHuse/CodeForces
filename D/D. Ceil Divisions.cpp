#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2e5 + 2;

int mem[N];

void solve(){
	vector<int> powers;
	
	memset(mem, 0, sizeof mem);
	
	
	int n; cin >> n;
	int tmp = 2;
	if(n == 3) powers.push_back(2);
	
	cout << n + 5 << endl;
	
	int steps = 0;
	
	while(tmp < n){
		mem[tmp] = 1;
		powers.push_back(tmp);
		tmp *= 2;
	}
	
	for(int i = 3; i < n; ++i){
		if(mem[i]) continue;
		steps++;
		cout << i << " " << n << endl;
	}
	steps += 2;
	cout << n << " " << powers.back() << endl;
	cout << n << " " << powers.back() << endl;
	
	while(powers.back() != 2){
		steps += 2;
		cout << powers.back() <<" " << powers.back()/2 << endl;
		cout << powers.back() <<" " << powers.back()/2 << endl;
		powers.pop_back();
	}
	
	while(steps < n+5){
		cout << 2 << " " << 1 << endl;
		steps++;
	}
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

