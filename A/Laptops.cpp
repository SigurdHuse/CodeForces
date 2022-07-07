#include <bits/stdc++.h>
using ll = long long;
#define REP(i,n) for(int i = 0; i< (n);i++)  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, a, b;
	cin >> n;
	string mood = "Poor ";
	vector<pair<int,int>> v(n);
	//pair<int,int> tmp;
	REP(i,n){
		cin >> a >> b;
		v[i] = {a,b};
	}
	sort(v.begin(),v.end(),
		[&](const auto p1, const auto p2){
			return p1.first < p2.first;});
	//cout << v[0].first << " " << v[1].first << endl;
	for(int i = 1; i< n; ++i){
		if(v[i-1].second > v[i].second){
			mood = "Happy ";
			break;
		}
	}
	
	cout << mood << "Alex"<<endl;
			
}
