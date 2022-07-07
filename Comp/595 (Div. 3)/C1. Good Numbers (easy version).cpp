#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

vector<unsigned long long> powers(40,1);

void fill_powers(){
	for(int i = 1; i< 40; ++i) powers[i] = powers[i-1]*3;
}

void solve(){
	ll n; cin >> n;
	string s = "";
	while(n){
		s += to_string(n%3);
		n /= 3;
	}
	reverse(all(s));
	int k = (int)s.size();
	int last_zero = INT_MAX, last_two = INT_MAX;
	bool need_change = 0;
	for(int i = k-1; i >= 0; --i){
		if(s[i] == '2'){
			need_change = 1;
			s[i] = '1';
			last_two = i;
		}
		else if(s[i] == '0'){
			if(last_zero > last_two)last_zero = i;
		}
	}
	if(last_two < last_zero){
		s.insert(0, "1");
		k++;
		for(int i = 1; i< k; ++i) s[i] = '0';
	}
	else if(need_change){
		s[last_zero] = '1';
		for(int i = last_zero+1; i< k; ++i) s[i] = '0';
	}
	unsigned long long ans = 0;
	for(int i = 0; i <k; ++i){
		ans += (ll)(s[i] - '0')*powers[k-i-1];
	}
	cout << ans << endl;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	int tt;
	cin >> tt;
	fill_powers();
	while(tt--){
		solve();
	}
}

