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
	string s; cin >> s;
	int n = SZ(s);
	if(isalpha(s[0]) && !isalpha(s[1])){
		string col = "", row = "";
		ll c;
		
		int i = 1;
		
		for(;s[i] != 'C'; ++i){
			row += s[i];
		}
		i++;
		for(;i < n; ++i){
			col += s[i];
		}
		
		c = atoll(col.c_str());
		col = "";
		while(c > 0){
			col += ((c % 26) + 'A' - 1);
			c /= 26;
		}
		reverse(all(col));
		cout << col << row << endl;
	}
	else{
		string tmp = "", row = "";
		int i = 0;
		ll col = 0;
		for(;isalpha(s[i]);++i){
			tmp += s[i];
		}
		for(;i < n; ++i){
			row += s[i];
		}
		int n1 = SZ(tmp);
		ll power = 1;
		for(int j = n1- 1; j >= 0; --j){
			col += (tmp[j] - 'A' + 1)*power;
			power *= 26;
		}
		
		cout << "R"<<row << "C" << col << endl;
	}
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	while(tt--){
		solve();
	}
}

