#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	unordered_map<string,int> mem;
	int q;
	cin >> q;
	string tmp, f, l, pair;
	for(int i = 0; i< q;++i){
		cin >> tmp >> f >> l;
		pair = f + l;
		if(tmp == "?"){
			if(mem[pair])cout << "YES" <<endl;
			else cout << "NO" <<endl;
		}
		else if(tmp == "+") mem[pair]++;
		else mem[pair]--;
	}
	
}
