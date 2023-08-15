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
	priority_queue<int> q1, q2;
	int x;
	REP(i,n){
		cin >> x; q1.push(x);
	}
	REP(i,m){
		cin >> x; q2.push(x);
	}
	
	while(q1.size() && q2.size()){
		int first = q1.top(), second = q2.top();
		q1.pop(); q2.pop();
		int tmp = first;
		first -= second;
		second -= tmp;
		if(first > 0) q1.push(first);
		if(second > 0) q2.push(second);
	}
	
	if(q1.size()){
		cout << "Tsondu\n";
	}
	else if(q2.size()){
		cout << "Tenzing\n";
	}
	else{
		cout << "Draw\n";
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

