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
	int l; cin >> l;
	ll limit = (1ll << 32) - 1;
	ll x = 0;
	ll ex = 1;
	string cur;
	bool ok = 1;
	stack<ll> st;
	while(l--){
		cin >> cur;
		if(cur == "add"){
			x += ex;
		}
		else if(cur == "for"){
			ll tmp; cin >> tmp;
			if(ex <= limit){
				st.push(tmp);
				ex *= tmp;
			}
			else{
				st.push(1);
			}
		}
		else if(cur == "end"){
			ll tmp = st.top(); 
			st.pop();
			ex /= tmp;
			ex = max(1ll, ex);
		}
		
		if(x > limit){
			ok = 0;
		}
	}
	if(ok){
		cout << x << endl;
	}
	else{
		cout << "OVERFLOW!!!" << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

