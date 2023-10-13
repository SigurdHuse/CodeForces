#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const string wanted = "abacaba";
const int N = 7;


int counter(string &s, int &n){
	int cnt = 0;
	for(int i = 0; i < n; ++i){
		if(s.substr(i, N) == wanted){
			cnt++;
		}
	}
	return cnt;
}

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	
	int cnt = counter(s, n);
	
	//if(cnt > 1){
	//	cout << "No\n";
	//	return;
	//}
	if(cnt == 1){
		for(int i = 0; i < n; ++i){
			if(s[i] == '?') s[i] = 'd';
		}
		cout << "Yes\n" << s << "\n";
		return;
	}
	
	for(int i = 0; i <= n - N; ++i){
		string ss = s;
		bool flag = 0;
		for(int j = 0; j < N; ++j){
			if(ss[i+j] != wanted[j] && ss[i+j] != '?'){
				flag = 1;
				break;
			}
			ss[i+j] = wanted[j];
		}
		if(flag) continue;
		cnt = counter(ss, n);
		if(cnt == 1){
			for(int k = 0; k < n; ++k){
				if(ss[k] == '?') ss[k] = 'd';
			}
			cout << "Yes\n" << ss << "\n";
			return;
		}
	}
	cout << "No\n";
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

