#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)  
using ll = long long;
using namespace std; 

void solve(){
	int n;
	string s;
	cin >> n>> s;
	string a = "1", b = "1";
	int last = n;
	for(int i = 1; i < n;++i){
		if(s[i] == '2'){
			a += "1";
			b += "1";
		}
		else if(s[i] == '1'){
			a += "1";
			b += "0";
			last = i + 1;
			break;
		}
		else{
			a += "0";
			b += "0";
		}
	}
	for(int i = last; i< n; ++i){
		b += s[i];
		a += "0";
	}
	cout << a << endl <<b << endl;
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

