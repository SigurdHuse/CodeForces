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
	
	map<string,int> mem, mem1;
	
	string name, winner; 
	vector<pair<string,int>> order;
	int inc;
	
	int mx= INT_MIN;
	
	for(int i = 0; i < n; ++i){
		cin >> name >> inc;
		if(mem.count(name)){
			mem[name] += inc;
		}
		else mem[name] = inc;
		order.push_back({name, inc});
	}
	for(auto p: mem) mx = max(mx, p.s);
	
	for(auto p : order){
		if(mem1.count(p.f)){
			mem1[p.f] += p.s;
		}
		else mem1[p.f] = p.s;
		
		if((mem1[p.f] >= mx) && (mem[p.f] == mx)){
			winner = p.f;
			break;
		}
		
	}
	
	cout << winner << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

