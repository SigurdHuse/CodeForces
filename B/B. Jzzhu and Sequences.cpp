#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

ll n, x, y;

const ll M = 1000000007;

struct Matrix{
	ll a[2][2] = {{0,0},{0,0}};
	
	Matrix operator*(const Matrix& other){
		Matrix product;
		REP(i,2) REP(j,2) REP(k,2){
			product.a[i][k] += a[i][j] * other.a[j][k];
			product.a[i][k] = (product.a[i][k] + M)%M;
		}
		return product;
	}
};

Matrix expo_power(Matrix a){
	Matrix res = Matrix();
	res.a[0][0] = res.a[1][1] = 1;
	while(n){
		if(n & 1){
			res = res*a;
		}
		n /= 2;
		a = a * a;
	}
	return res;
}

void solve(){
	Matrix seq;
	seq.a[1][0] = 1; seq.a[1][1] = -1;
	seq.a[0][0] = 0; seq.a[0][1] = 1;
	cin >> x >> y >> n;
	
	Matrix total = expo_power(seq);
	cout << (y*total.a[0][0] +  x*total.a[1][0] + M)%M << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

