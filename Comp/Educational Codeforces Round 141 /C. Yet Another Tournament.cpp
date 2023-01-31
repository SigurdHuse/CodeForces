#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

bool myfunc(pair<int,int> p1, pair<int,int> p2){
	if(p1.f == p2.f) return p1.s < p2.s;
	return 0;
}

void solve(){
	int n, m; cin >> n >> m;
	vector<int> v(n), scores(n);
	for(auto &a : v) cin >> a;
	vector<pair<int,int>> mem(n);
	
	REP(i,n){
		mem[i].f = v[i];
		mem[i].s = i;
	}
	
	sort(all(mem));
	sort(all(mem), myfunc);
	//for(auto p : mem) cout << p.f << " " << p.s << endl;
	vector<bool> beaten(n);
	
	int score = 0, cur = 0, l = 0;
	
	int want = 1;
	
	while((score < n) && (l < n) && (cur <= m)){
		if((want < n) && (cur + v[want] <= m)){
			cur += v[want];
			beaten[want] = 1;
			want++;
			score++;
		}
		else if(mem[l].f + cur <= m){
			cur += mem[l].f;
			beaten[mem[l].s] = 1;
			l++; 
			score++;
		}
		else break;
		
		while((l < n) && (beaten[mem[l].s])) l++;
	}
	
	for(int i = 0; i < n; ++i){
		scores[i] = i;
		if(!beaten[i]) scores[i]++;
	}
	sort(all(scores), greater<int>());
	
	int ans = n+1;
	for(int i = 0; i < n; ++i){
		if(score >= scores[i]){
			ans = i +1;
			break;
		}
	}
	
	score = 0, cur = 0;
	vector<bool> beaten1(n);
	
	for(int i = 0; i < n; ++i){
		cur += mem[i].f;
		if(cur > m){
			score = i;
			break;
		}
		beaten1[mem[i].s] = 1;
	}
	
	for(int i = 0; i < n; ++i){
		scores[i] = i;
		if(!beaten1[i]) scores[i]++;
	}
	
	sort(all(scores), greater<int>());
	for(int i = 0; i < n; ++i){
		if(score >= scores[i]){
			ans = min(ans, i+1);
			break;
		}
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

