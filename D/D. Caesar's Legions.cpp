#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int M = 1e8;

int dp[101][101][11][11];

int succFootman, succHorseman;

int call(int footman, int horseman, int i1, int i2){
	if(dp[footman][horseman][i1][i2] != -1){
		return dp[footman][horseman][i1][i2];
	}
	
	if(footman + horseman == 0){
		return 1;
	}
	int opt1 = 0, opt2 = 0;
	
	if((i1 < succFootman) && (footman > 0)){
		opt1 = call(footman-1, horseman, i1+1,0) % M;
	}
	
	if(i2<succHorseman && horseman>0){
        opt2= call(footman,horseman-1,0,i2+1)%M;
	}
	
	 return dp[footman][horseman][i1][i2]=(opt1+opt2)%M;
}

void solve(){
	int footman, horseman;
	memset(dp,-1,sizeof dp);
	cin>> footman>> horseman>> succFootman>> succHorseman;
	cout<< call(footman,horseman,0,0)<< endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

