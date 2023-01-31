#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

void solve(){
	int n, k; cin >> n >> k;
	string s; cin >> s;
	int one = 0, zero = 0;
	
	vector<int> q;
	
	
	for(int i = 0; i < k; ++i){
		if(s[i] == '1') one++;
		if(s[i] == '0') zero++;
		if(s[i] == '?') q.push_back(i);
	}
	int idx = 0;
	while((idx < SZ(q)) && (one != zero)){
		if(one > zero){
			s[q[idx]] = '0';
			zero++;
		}
		else{
			s[q[idx]] = '1';
			one++;
		}
		idx++;
	}
	if(one != zero){
		cout << "NO" << endl;
		return;
	}
	
	for(int i = k; i < n; ++i){
		if(s[i] == '1') one++;
		if(s[i] == '0') zero++;
		if(s[i] == '?') q.push_back(i);
		
		if(s[i-k] == '1') one--;
		if(s[i-k] == '0') zero--;
		
		while((idx < SZ(q)) && (one != zero)){
			if(q[idx] <= i-k){
				idx++;
				continue;
			}
			if(one > zero){
				s[q[idx]] = '0';
				zero++;
			}
			else{
				s[q[idx]] = '1';
				one++;
			}
			idx++;
		}
		if(one != zero){
			cout << "NO" << endl;
			return;
		}
		
	}
	cout << "YES" << endl;
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

