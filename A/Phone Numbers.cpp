#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, eight_cnt = 0;
	string s;
	cin >> n >> s;
	for(int i = 0; i< n;++i){
		if(s[i] == '8') eight_cnt++;
	}
	//cout << n/11 << " " << eight_cnt <<endl;
	cout << min(n/11, eight_cnt) <<endl;
}
