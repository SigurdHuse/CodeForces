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
	int n; cin >> n;
	string s; cin >> s;
	
	queue<int> q;
	int cur = 0;
	
	for(int i = 0; i < n; ++i){
		if(i > 0 && s[i] != s[i-1]) cur++;
		if(i > 0 && s[i] == s[i-1]){
			q.push(cur);
		}
	}
	
	int deleted = 0, score = 0;
	
	for(int i = 0; i < n; ++i){
		if(q.empty()) break;
		q.pop();
		deleted++;
		score++;
		
		while(!q.empty() && q.front() == i){
			q.pop();
			deleted++;
		}
		deleted++;
	}
	score += (n - deleted + 1)/2;
	cout << score << endl;
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

