#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const ll M = 1e9 + 7;

int n;

struct Matrix{
	ll a[4][4] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
	
	Matrix operator*(const Matrix& other){
		Matrix product;
		REP(i,4) REP(j,4) REP(k,4){
			product.a[i][k] += a[i][j] * other.a[j][k];
			product.a[i][k] = product.a[i][k] %M;
		}
		return product;
	}
};

Matrix expo_power(Matrix a){
	Matrix res = Matrix();
	res.a[0][0] = res.a[1][1] = 1;
	res.a[2][2] = res.a[3][3] = 1;
	while(n){
		if(n & 1){
			res = res*a;
		}
		n /= 2;
		a = a * a;
	}
	return res;
}
// Markov chain

void solve(){
	cin >> n;
	
	Matrix trans;
	trans.a[0][1] = trans.a[0][2] = trans.a[0][3] = 1;
	trans.a[1][0] = trans.a[1][2] = trans.a[1][3] = 1;
	trans.a[2][0] = trans.a[2][1] = trans.a[2][3] = 1;
	trans.a[3][0] = trans.a[3][1] = trans.a[3][2] = 1;
	Matrix ans = expo_power(trans);
	
	cout << ans.a[0][0] << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

