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
	string s; cin >> s;
	ll nb, ns, nc, pb, ps, pc, r;
	cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;
	
	ll cnt = 0;
	int n = SZ(s);
	int i = 0;
	
	bool che = 0, bre = 0, steak = 0;
	
	for(int j= 0; j < n; ++j){
		if(s[j] == 'C') che = 1;
		if(s[j] == 'B') bre = 1;
		if(s[j] == 'S') steak = 1;
	}
	
	for(;i <= n; ++i){
		if(i == n) cnt++;
		i %= n;
		if((!steak) && (!bre) && (nc == 0)) break;
		if((!che) && (!steak) && (nb == 0)) break;
		if((!che) && (!bre) && (ns == 0)) break;
		
		if((!steak) && (nc == 0) && (nb == 0)) break;
		if((!bre) && (nc == 0) && (ns == 0)) break;
		if((!che) && (ns == 0) && (nb == 0)) break;
		
		
		if((nb == 0) && (ns == 0) && (nc == 0)) break;
		if(s[i] == 'B'){
			if(nb == 0){
				if(pb > r) break;
				else r -= pb;
			}
			else{
				nb--;
			}
		}
		
		if(s[i] == 'S'){
			if(ns == 0){
				if(ps > r) break;
				else r -= ps;
			}
			else{
				ns--;
			}
		}
		
		if(s[i] == 'C'){
			if(nc == 0){
				if(pc > r) break;
				else r -= pc;
			}
			else{
				nc--;
			}
		}
	}
	ll total = 0, left = 0;
	for(;i < n; ++i){
		if(s[i] == 'C') left += pc;
		if(s[i] == 'B') left += pb;
		if(s[i] == 'S') left += ps;
	}
	for(int j =0; j < n; ++j){
		if(s[j] == 'C') total += pc;
		if(s[j] == 'B') total += pb;
		if(s[j] == 'S') total += ps;
	}
	
	if(left <= r){
		cnt++;
		r -= left;
	}
	cnt += r / total;
	cout << cnt << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

