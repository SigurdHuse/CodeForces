#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int ask(int x, int y) {
	printf("? %d %d\n", x, y);
	fflush(stdout);
	scanf("%d", &x);
	return x;
}

void give(int x, int y) {
	printf("! %d %d\n", x, y);
	fflush(stdout);
}

void solve(){
	int n, m; cin >> n >> m;
	int T1 = ask(1,1);
	
	if(T1 >= n){
		int T2 = ask(1, T1 + 1);
		give(T2 + 1, T1 + 1);
	}
	
	else if(T1 >= m){
		int T2 = ask(T1 + 1, 1);
		give(T1 + 1, T2 + 1);
	}
	else{
		int T2 = ask(T1 + 1, 1);
		int T3 = ask(1, T1 + 1);
		if(T2 == T1 && T3 == T1) give(T1 + 1, T1 + 1);
		else if(T3 == T1) give(T1 + 1, T2 + 1);
		else give(T3 + 1, T1 + 1);
		
	}
	
}


int main()
{
	//ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		solve();
	}
}

