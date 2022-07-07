#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<pair<int,int>> one(n), two(n);
	REP(i,n) cin >> one[i].first;
	REP(i,n) cin >> one[i].second;
	REP(i,n) two[i] = one[i];
	vector<pair<int,int>> moves;
	for(int i = 0; i < n-1; ++i){
		for(int j = 0; j < n-i-1; ++j){
			if(one[j].first > one[j+1].first){
				swap(one[j], one[j+1]);
			}
		}
	}
	for(int i = 0; i < n-1; ++i){
		for(int j = 0; j < n-i-1; ++j){
			if(one[j].first == one[j+1].first){
				if(one[j].second > one[j+1].first){
					swap(one[j], one[j+1]);
				}
			}
		}
	}
	//for(auto p : one) cout << p.first << " " << p.second << endl;
	for(int i = 0; i < n-1; ++i){
		if(one[i].second > one[i+1].second){
			cout << -1 << endl;
			return;
		}
	}
	int indx = 0;
	for(int i = 0; i < n; ++i){
		if(indx == n) break;
		if((one[indx].first == two[i].first) && (one[indx].second == two[i].second)){
			indx++;
			continue;
		}
		for(int j = i+1; j < n; ++j){
			if((one[indx].first == two[j].first) && (one[indx].second == two[j].second)){
				moves.push_back({i+1,j+1});
				swap(two[i], two[j]);
				indx++;
				break;
			}
		}
	}
	
	if(moves.size() > 10000){
		cout << -1 << endl;
		return;
	}
	cout << moves.size() << endl;
	for(auto p : moves) cout << p.first << " " << p.second << endl;	
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

