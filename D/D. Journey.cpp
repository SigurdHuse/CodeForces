#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

// Not possible to go back to starting city

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	s += "$";
	vector<int> distr(n+1), distl(n+1);
	
	int cur = 0;
	
	for(int i = 0; i <= n; ++i){
		if(s[i] == 'R' && s[(i +1)%n] == 'L'){
			cur+= 2;
			i++;
		}
		else{
			if(s[i] == 'R') cur++;
			for(int j = i; j >= i-cur; --j){
				distr[j] = cur - j + i;
			}
			cur = 0;
		}
	}
	cur = 0;
	//for(int i = n; i <= n; ++i){
		//if(s[i] == 'R' && s[(i + 1)%n] == 'L'){
			//cur+= 2;
			//i++;
		//}
		//else{
			//if(s[i] == 'R') cur++;
			//for(int j = i; j > i-cur; --j){
				//distr[j] = cur - j + i;
			//}
			//cur = 0;
		//}
	//}
	
	for(int i : distr) cout << i << " ";
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

