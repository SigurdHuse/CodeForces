#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

bool is_pali(string &s){
	int n = s.size();
	for(int i = 0; i < n/2; ++i){
		if(s[i] != s[n - i-1]) return 0;
	}
	return 1;
}

string inc(string s, int x){
	int hour = (int)(s[0] - '0')*10 + (int)(s[1] - '0');
	int min = (int)(s[3] - '0')*10 + (int)(s[4] - '0');
	min += x;
	while(min >= 60){
		hour++;
		min -= 60;
	}
	//cout << hour << " " << min << endl;
	hour %= 24;
	string ans = "";
	if(hour < 10) ans += "0";
	ans += to_string(hour);
	ans += ":";
	if(min < 10) ans += "0";
	ans += to_string(min);
	return ans;
}

void solve(){
	string s; cin >> s;
	int x, ans = 0; cin >> x;
	set<string> mem;
	while(!mem.count(s)){
		mem.insert(s);
		ans += is_pali(s);
		s = inc(s, x);
	}
	cout << ans << endl;
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

