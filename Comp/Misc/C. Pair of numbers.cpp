#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, tmp; cin >> n;
	ll s= 0;
	unordered_map<int,int> mem;
	REP(i,n){
		cin >> tmp;
		mem[tmp]++;
		s += tmp;
	}
	for(auto p : mem){
		ll wanted = s - 2*p.first;
		if(wanted % 2) continue;
		else wanted /= 2;
		if(wanted == p.first && p.second > 1){
			cout << "YES" << endl;
			return;
		}
		else if(mem.count(wanted)){
			cout << "YES" << endl;
			return;
		}
	}
	
	cout << "NO" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

