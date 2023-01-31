#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

const int N = 2*1e5 + 5;
int v[N];

struct Node{
	int l, r, dist;
	
	bool operator<(const Node& rhs) const{
		if(dist == rhs.dist){
			return l > rhs.l;
		}
		return dist < rhs.dist;
	}
};

void solve(){
	int n; cin >> n;
	int i = 1;
	priority_queue<Node> q;
	Node tmp;
	tmp.l = 1;
	tmp.r = n;
	tmp.dist = n - 1 + 1;
	q.push(tmp);
	//for(int j = 1; j <= n; ++j) v[j] = -1;
	
	while(q.size()){
		Node cur = q.top(); q.pop();
		if((cur.r > n) || (cur.r <= 0)) continue;
		if((cur.l > n) || (cur.l <= 0)) continue;
		if(cur.l > cur.r) continue;
		
		if(cur.dist & 1){
			v[(cur.r + cur.l)/2] = i;
		}
		else{
			v[(cur.r + cur.l - 1)/2] = i;
		}
		i++;
		tmp.l = cur.l;
		tmp.r = (cur.r + cur.l)/2-1;
		tmp.dist = tmp.r - tmp.l + 1;
		q.push(tmp);
		tmp.l = (cur.r + cur.l)/2+1;
		tmp.r = cur.r;
		tmp.dist = tmp.r - tmp.l + 1;
		q.push(tmp);
	}
	for(int j = 1; j <= n; ++j){
		if(v[j] == -1){
			v[j] = i;
			i++;
		}
	}
	for(int j = 1; j <= n; ++j){
		cout << v[j] << " ";
	}
	cout << endl;
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

