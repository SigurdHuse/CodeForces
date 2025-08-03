#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2e5 + 5;

int t[4*N];

// op = 0 -> OR
// op = 1 -> XOR 

void build(int a[], int v, int tl, int tr, int op){
	if (tl == tr) {
        t[v] = a[tl];
    }
    else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm, (op + 1) % 2);
        build(a, v*2+1, tm+1, tr, (op + 1) % 2);
        
        //cout << v << " " << op << endl;
        if(op == 1)t[v] = (t[v*2] ^ t[v*2+1]);
        else t[v] = (t[v*2] | t[v*2+1]);
    }
}

// int v, int tl, int tr, int l, int r
int find_v() {
    return t[1];
}


void update(int v, int tl, int tr, int pos, int new_val, int op) {
    if (tl == tr) {
        t[v] = new_val;
    } else {
        int tm = (tl + tr) / 2;
        
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val, (op + 1) % 2);
        else
            update(v*2+1, tm+1, tr, pos, new_val, (op + 1) % 2);
        
        if(op == 1)t[v] = (t[v*2] ^ t[v*2+1]);
        else t[v] = (t[v*2] | t[v*2+1]);
    }
}


void solve(){
	int e,m;cin >> e >> m;
	int n = 1 << e;
	int arr[n];
	
	REP(i,n) cin>> arr[i];
	
	build(arr, 1, 0, n-1, (e & 1) ^ 1);
	//for(int i = 1; i <= 4*n; ++i){
		//cout << t[i] << " ";
	//}
	//cout << endl;
	for(int i = 0; i < m; ++i){
		int p, b; cin >> p >> b;
		update(1, 0, n-1, p-1, b, (e & 1) ^ 1);
		cout << find_v() << "\n";
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

