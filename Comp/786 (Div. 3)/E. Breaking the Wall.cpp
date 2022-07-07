#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

void solve(){
	int n; cin >> n;
	vector<int> v(n);
	for(auto &x : v) cin >> x;
	int mi = INT_MAX, mi1 = INT_MAX, mi2 = INT_MAX;
	int indx1 = 0, indx2= 0;
	int shots = v[0]/2 + v[0]%2;
	mi = min(mi,max(shots,v[1]-shots));
	shots = v[n-1]/2 + v[n-1]%2;
	mi = min(mi,max(shots, v[n-2]-shots));
	
	for(int i = 0; i <n; ++i){
		if(v[i] < mi1){
			mi1 = v[i];
			indx1 = i;
		}
		else if(v[i] >= mi1 && v[i] < mi2){
			mi2 = v[i];
			indx2 = i;
		}
		shots = v[i]/2 + v[i]%2;
		mi = min(mi,max({shots, v[i-1]-shots, v[i+1]-shots}));
		
		mi = min(mi, max({v[i-1], v[i+1]}));
	}
	mi = min(mi, mi1/2+ mi1%2 + mi2/2 + mi2%2);
	cout << mi << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

