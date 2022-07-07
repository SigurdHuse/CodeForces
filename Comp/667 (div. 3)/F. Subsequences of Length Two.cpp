#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, k; cin >> n >> k;
	string s, t; cin >> s >> t;
	int l = 0, r = n/2, cnt = 0, other_cnt = 0;
	bool side = 1;
	for(char c : s) if(c != t[0] && c != t[1]) other_cnt++;
	while(cnt < k){
		if(side && l < n/2 && s[l] != t[0]){
			if(s[l] != t[1]){
				other_cnt--;
				cnt++;
				s[l] = t[0];
			}
			l++;
		}
		else if(!side && r < n && s[r] != t[1]){
			if(s[r] != t[0]){
				other_cnt--;
				cnt++;
				s[r] = t[1];
			}
			r++;
		}
		side ^= 1;
	}
	cout << s<< endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

