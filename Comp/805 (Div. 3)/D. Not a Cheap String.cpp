#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	string s, cpy; cin >> s;
	cpy = s;
	int p, cur = 0; cin >> p;
	sort(all(cpy), greater<char>());
	for(char c : s){
		cur += c - 'a' + 1;
	}
	int indx = 0, n = s.size(); 
	map<char,int> cnt;
	while(indx < n && cur > p){
		cnt[cpy[indx]]++;
		cur -= cpy[indx] - 'a' + 1;
		indx++;
	}
	for(char c : s){
		if(cnt[c] > 0){
			cnt[c]--;
			continue;
		}
		cout << c;
	}
	cout << endl;
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

