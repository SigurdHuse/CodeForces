#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	string s, t; cin >> s >> t;
	if(s.size() > t.size()) swap(s,t);
	int n1 = (int)s.size(), n2 = (int)t.size();
	int one = 0, two = 0;
	while(two < n2 && one < n1){
		if(t[two] == s[one]){
			two++;
			one++;
		}
		else two++;
	} 
	while(one < n1){
		t += s[one];
		one++;
	}
	cout << t << endl;
	int open = 0;
	for(char c : t){
		if(c == '(') open++;
		else open--;
	}
	if(open < 0){
		string ans = "";
		while(open < 0){
			ans += "(";
			open++;
		}
		ans += t;
		t = ans;
	}
	while(open > 0){
		t += ")";
		open--;
	}
	cout << t << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

