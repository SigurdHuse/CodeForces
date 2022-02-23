#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n,k;
	char tmp;
	cin >> n >> k;
	vector<pair<ll,char>> mem(26);
	for(int i = 0;i<26;++i){
		mem[i].second = i + 'A';
		mem[i].first = 0;
	}
	for(int i = 0; i< n;++i){
		cin >> tmp;
		mem[tmp - 'A'].first++;
	}
	sort(mem.begin(),mem.end(),
		[&](auto l, auto p){return l.first >p.first;});
	//for(auto y : mem) cout << y.first << " " <<y.second <<endl;
	ll ans = 0;
	for(auto p : mem){
		if(k < p.first || p.first == 0){
			ans += k*k;
			break;
		}
		else{
			ans += p.first*p.first;
			k -= p.first;
		}
	}
	cout << ans << endl;
}
