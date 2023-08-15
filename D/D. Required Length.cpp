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
	unsigned long long n, x; cin >> n >> x;
	
	//REP(i,n){
		//mx *= 10;
	//}
	
	queue<unsigned long long> q;
	q.push(x);
	
	map<unsigned long long,bool> mem;
	int ans = 0;
	bool ok = 0;
	while(q.size()){
		int len = SZ(q);
		ok = 0;
		for(int i = 0; i < len; ++i){
			unsigned long long cur = q.front(); q.pop();
			if(mem[cur]) continue;
			mem[cur] = 1;
			
			unsigned long long cnt = 0, tmp = cur;
			
			while(tmp > 0){
				cnt++;
				tmp /= 10;
			}
			if(cnt > n) continue;
			tmp= cur;
			while(tmp > 0){
				q.push(cur * (tmp % 10));
				tmp /= 10;
			}
			
			if(cnt == n){
				ok = 1;
				break;
			}
		}
		if(ok) break;
		ans++;
	}
	
	cout << (ok ? ans : -1) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

