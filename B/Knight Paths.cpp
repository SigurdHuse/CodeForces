#include <bits/stdc++.h>
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++)
const ll M = 4294967296;  
using namespace std; 

struct Matrix{
	ll a[8][8];
	Matrix operator *(Matrix other){
		Matrix product{{{0,0},{0,0}}};
		REP(i,8){
			REP(j,8){
				REP(k,8){
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
	Matrix state;
	REP(i,8)REP(j,8){state.a[i][j] = 0;}
	state.a[0][0] = 1;
	Matrix trans{{{2,3,4,4,4,4,3,2},
				  {3,4,6,6,6,6,4,3},
				  {4,6,8,8,8,8,6,4},
				  {4,6,8,8,8,8,6,4},
				  {4,6,8,8,8,8,6,4},
				  {4,6,8,8,8,8,6,4},
				  {2,3,4,4,4,4,3,2},
				  {3,4,6,6,6,6,4,3}}};
	cin >> n;
	while(n > 0){
		if(n%2) state = state * trans;
		trans = trans*trans;
		n/=2; 
	}
	cout << state.a[0][0] << endl;
	
}
