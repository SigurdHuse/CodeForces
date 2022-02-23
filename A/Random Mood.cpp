#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
using ll = long long;  
using namespace std; 

struct Matrix{
	double a[2][2];
	Matrix operator *(Matrix other){
		Matrix product{{{0,0},{0,0}}};
		REP(i,2){
			REP(j,2){
				REP(k,2){
					product.a[i][k] += a[i][j]*other.a[j][k];
				}
			}
		}
		return product;
	}			
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	double p;
	cin >> n >> p;
	Matrix m{{{1.0-p,p},{p,1.0-p}}}, res{{{1,0},{0,1}}}; 
	while(n){
		if(n%2) res = res * m;
		m = m*m;
		n/=2;
	}
	cout << setprecision(16)<<res.a[0][0] << endl;
}
