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
	int n, m; cin >> n >> m;
	set<ll> line;
	while(n--){
		int x; cin >> x;
		line.insert(x);
	}
	while(m--){
		ll a, b, c; cin >> a >> b >> c;
		ll goal = 4*a*c - b*b;
		
		auto it = line.upper_bound(b);
		if(it == line.begin()){
			if(*it * (*it - 2*b) < goal){
				cout << "YES" << endl;
				cout << *it << endl;
				continue;
			}
			it++;
			if(it == line.end()){
				cout << "NO" << endl;
				continue;
			}
			
			if(*it * (*it - 2*b) < goal){
				cout << "YES" << endl;
				cout << *it << endl;
				continue;
			}
			cout << "NO" << endl;
			continue;
		}
		it--;
		if(*it * (*it - 2*b) < goal){
			cout << "YES" << endl;
			cout << *it << endl;
			continue;
		}
		
		if(it != line.begin()){
			it--;
			if(*it * (*it - 2*b) < goal){
				cout << "YES" << endl;
				cout << *it << endl;
				continue;
			}
			it++;
		}
		it++;
		if(it == line.end()){
			cout << "NO" << endl;
			continue;
		}
		if(*it * (*it - 2*b) < goal){
			cout << "YES" << endl;
			cout << *it << endl;
			continue;
		}
		it++;
		if(it == line.end()){
			cout << "NO" << endl;
			continue;
		}
		if(*it * (*it - 2*b) < goal){
			cout << "YES" << endl;
			cout << *it << endl;
			continue;
		}
		cout << "NO" << endl;
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

