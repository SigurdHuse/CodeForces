#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<int> mem(26);
	string one, two;
	cin >> one >> two;
	for(char c : one)mem[c - 'A']++;
	for(char c : two)mem[c - 'A']++;
	cin >> one;
	for(char c : one) mem[c- 'A']--;
	if(all_of(mem.begin(),mem.end(),[&](int i){return i == 0;})) cout << "YES" <<endl;
	else cout << "NO" <<endl;
		
}
