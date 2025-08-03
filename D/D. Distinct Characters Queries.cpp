#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 1e5 + 5;

int t[4*N];

int count_bits(int n){
	int ans = 0;
	while(n > 0){
		if(n & 1) ans++;
		n /= 2;
	}
	return ans;
}

void build(string &s, int v, int tl, int tr){
	if (tl == tr) {
        t[v] |= 1 << (s[tl] - 'a');
    }
    else {
        int tm = (tl + tr) / 2;
        build(s, v*2, tl, tm);
        build(s, v*2+1, tm+1, tr);
		
        t[v] = (t[v*2] | t[v*2+1]);
    }
}

// 
int find_cnt(int v, int tl, int tr, int l, int r) {
     if (l > r) 
        return 0;
    if (l == tl && r == tr) {
		return t[v];
    }
    int tm = (tl + tr) / 2;
	return find_cnt(v*2, tl, tm, l, min(r, tm)) |
	find_cnt(v*2+1, tm+1, tr, max(l, tm+1), r);
}


void update(int v, int tl, int tr, int pos, char new_val) {
    if (tl == tr) {
		t[v] = 1 << (new_val - 'a');
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val);
        else
            update(v*2+1, tm+1, tr, pos, new_val);
        
        t[v] = (t[v*2] | t[v*2+1]);
    }
}


void solve(){
	string s; cin >> s;
	int n = SZ(s), q; cin >> q;
	build(s, 1, 0, n-1);
	while(q--){
		int k; cin >> k;
		if(k == 1){
			int pos; cin >> pos, pos--;
			char c; cin >> c;
			update(1, 0, n-1, pos, c);
		}
		else{
			int l, r; cin >> l >> r, l--, r--;
			int tmp = find_cnt(1, 0, n-1, l, r);
			cout << count_bits(tmp) << "\n";
		}
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

