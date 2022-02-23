#include <bits/stdc++.h>
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++)
const int M = 1000000007;  
using namespace std; 

struct Matrix{
	ll a[2][2];
	Matrix operator *(Matrix other){
		Matrix product{{{0,0},{0,0}}};
		REP(i,2){
			REP(j,2){
				REP(k,2){
					product.a[i][k] += (a[i][j]%M)*(other.a[j][k]%M);
					product.a[i][k] %= M;
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
	ll n;
	Matrix state{{{1ll,0ll},{0ll,0ll}}};
	Matrix trans{{{19ll,7ll},{6ll,20ll}}};
	cin >> n;
	while(n){
		if(n%2) state = state * trans;
		trans = trans*trans;
		n/=2;
	}
	cout << state.a[0][0] << endl;
	
}
