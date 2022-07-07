#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, tmp, finish; cin >> n;
	string op, str, nstr;
	string last, in, var1, var2;
	unordered_map<string,pair<int,string>> mem;
	REP(j,n){
		cin >> in >> op;
		last = in;
		if(op == ":="){
			cin >> str; tmp = 0, finish = 0;
			nstr = "";
			for(int i = 0; i < (int)str.size() - 3; ++i){
				if(str[i] == 'h' && str[i+1] == 'a' && str[i+2] == 'h' && str[i+3] == 'a'){
					tmp++; finish = i + 2;
				}
				else nstr += str[i];
			}
			for(int i = finish; i < (int)str.size();++i) nstr += str[i];
			mem[in] = {tmp,nstr};
		}
		else{
			cin >> var1 >> var2 >>var2; tmp = 0, finish = 0;
			str = mem[var1].second + mem[var2].second;
			nstr = "";
			for(int i = 0; i < (int)str.size() - 3; ++i){
				if(str[i] == 'h' && str[i+1] == 'a' && str[i+2] == 'h' && str[i+3] == 'a'){
					tmp++; finish = i + 2;
				}
				else nstr += str[i];
			}
			for(int i = finish; i < (int)str.size();++i) nstr += str[i];
			mem[in] = {mem[var1].first + mem[var2].first + tmp, nstr};
		}
	}
	int ans = 0;
	string fin = mem[last].second;
	for(int i = 0; i < (int)fin.size() - 3; ++i){
		if(fin[i] == 'h' && fin[i+1] == 'a' && fin[i+2] == 'h' && fin[i+3] == 'a'){
			ans++;
		}
	}
	cout << mem[last].first + ans << endl;
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

