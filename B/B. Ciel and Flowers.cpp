#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	int r, g, b; cin >> r >> g >> b;
	
	int one = r / 3 + g / 3 + b / 3;
	int two = 0, tre = 0;
	if((r >= 1) && (g >= 1) && (b >= 1)){
		two++;
		r -= 1; g -= 1; b -= 1;
		//cout << r << " " << g << " " << b << endl;
		two += r / 3 + g / 3 + b / 3;
	}
	
	if((r >= 1) && (g >= 1) && (b >= 1)){
		tre += 2;
		r -= 1; g -= 1; b -= 1;
		tre += r / 3 + g / 3 + b / 3;
	}
	
	//cout << one << " " << two <<  " " << tre << endl;
	
	cout << max({one, two, tre}) << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

