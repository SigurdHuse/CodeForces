#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 1e6 + 3;

int tens[N], n;

void fill_tens(int &b){
	tens[0] = 1;
	
	for(int i = 1; i<= n; ++i){
		tens[i] = (tens[i-1] * 10) % b;
	}
}


void solve(){
	string s; cin >> s;
	int a, b; cin >> a >> b;
	n = SZ(s);
	fill_tens(b);
	
	int cur_b = 0, cur_a = 0;
	
	for(int i= 0; i < n; ++i){
		cur_b += (s[i] - '0')*tens[n-i-1];
		cur_b %= b;
	}
	
	for(int i = 0; i < n-1; ++i){
		cur_a *= 10;
		cur_a += (s[i]-'0');
		cur_a %= a;
		
		cur_b -= (s[i] - '0')*tens[n-i-1]%b;
		cur_b = (cur_b + 2*b) % b;
		
		//cout << cur_a << " " << cur_b << endl;
		if((s[i+1] != '0') && (cur_a == 0) && (cur_b == 0)){
			cout << "YES" << endl;
			for(int j = 0; j <= i; ++j){
				cout << s[j];
			}
			cout << endl;
			for(int j = i+1; j < n; ++j){
				cout << s[j];
			}
			
			cout << endl;
			return;
		}
	}
	//if((cur_a == 0) && (cur_b == 0)){
		//cout << "YES" << endl;
		//for(int i = 0; i < n-1; ++i) cout << s[i];
		//cout << endl;
		//cout << s[n-1] << endl;
		//return; 
	//}
	
	
	cout << "NO" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

