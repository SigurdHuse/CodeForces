#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

const int MAX= 1e5 + 5;
bool row[MAX], col[MAX], diag[MAX*2], diag2[MAX*2];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, q, r, c;
	cin >> n >> q;
	for(int i = 0 ; i< q; ++i){
		cin >> r >> c;
		if(!row[r] && !col[c] && !diag[c-r +n] && !diag2[r+c]){
			cout << "YES" <<endl;
			row[r] = 1; 
			col[c] = 1;
			diag[c-r+n] = 1;
			diag2[r+c] = 1;
		}
		else cout << "NO" <<endl;
	}
}
