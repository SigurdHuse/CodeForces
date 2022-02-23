#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int digit_count(string &s){
	int ans = 0;
	for(char c : s) ans += c - '0';
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, tmp;
	string s = "";
	cin >> n;
	cin >> tmp;
	s += to_string(tmp);
	bool possible = 0;
	for(int i = 1; i <n;++i){
		int j = i, l = 1, goal = digit_count(s.substr(0,i));
		/*
		while(digit_count(s.substr(j,l)) <= goal || l < n - j){
			if(digit_count(s.substr(j,l)) == goal){
				j += l;
				l = 1;
			}
			l++;
		}
		if(j == n-1) possible = 1;
		*/
		cout << digit_count(s.substr(0,i) <<endl;
	}
	if(possible) cout << "YES" <<endl;
	else cout << "NO" <<endl;
} 
