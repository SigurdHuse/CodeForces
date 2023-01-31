#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

int cur = 0;

vector<pair<int,char>> alf(26);

void comapare(string &s1, string &s2){
	int n1 = SZ(s1), n2 = SZ(s2);
	
	for(int i = 0; i < min(n1,n2); ++i){
		if(alf[s1[i]].f > alf[s2[i]].s){
			alf[s1[i]].f = cur;
			cur++;
		}
	}
	
}


void solve(){
	int n; cin >> n;
	vector<string> v(n);
	for(auto &s : v) cin >> s;
	for(int i = 0; i < 26){
		alf[i].f = i;
		alf[i].s = i + 'a';
	}
	
	
	
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

