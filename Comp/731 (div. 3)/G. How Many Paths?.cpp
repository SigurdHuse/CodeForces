#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
using ll = long long;
using namespace std; 

void solve(){
	int n, m, edge, node;cin>>n >> m;
	queue<int> q;
	vector<int> mem(n + 1, 0);
	unordered_map<int,vector<int>> nodes;
	REP(i,m){
		cin >> node >> edge;
		nodes[node].push_back(edge);
	}
	mem[1] = 1;
	q.push(1);
	while(!q.empty()){
		//cout << q.front() << endl;
		for(int i : nodes[q.front()]){
			if(i == q.front()) mem[i] = -1;
			if(mem[i] == -1 || mem[i] == 2){
				//mem[q.front()] = -1;
				for(int j : nodes[i]){
					if(mem[j] != -1){
						mem[j] = -1;
						q.push(j);
					}
				}
			}
			else{
				mem[i]++;
				q.push(i);
			}
		}
		q.pop();
	}
	for(int i = 1; i< n+1;++i) cout << mem[i] << " ";
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

