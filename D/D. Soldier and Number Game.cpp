#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 5e6 + 1;




void fill(vector<int>& cum){
	vector<int> l_p_f(N, 0), no_p_d(N, 0);
	for(int i = 2; i < N; ++i){
		if(l_p_f[i] == 0){
			for(int multiple = i; multiple < N; multiple += i){
				l_p_f[multiple] = i;
			}
		}
		int p = l_p_f[i];
		no_p_d[i] = 1 + no_p_d[i / p];
		cum[i] += no_p_d[i] + cum[i-1];
	}
}



int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	vector<int> cum(N, 0);
	fill(cum);
	while(tt--){
		int a, b; cin >> a >> b;
		cout << cum[a] - cum[b] << endl;
	}
}


