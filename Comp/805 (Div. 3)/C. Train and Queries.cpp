#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()  
typedef long long ll;
using namespace std; 

typedef std::multiset<int>::iterator It;

void solve(){
	int n, k, a, b; cin >> n >> k;
	multiset<int> s;
	REP(i,n){
		cin >> a;
		s.insert(a);
	}
	
	REP(i,k){
		cin >> a >> b;
		if(s.count(a) == 0 || s.count(b) == 0) cout << "No" << endl;
		else{
			pair<It,It> it1 = s.equal_range(a), it2 = s.equal_range(b);
			//cout << distance(s.begin(),it1.first) << " " << distance(s.begin(),it2.second) << endl;
			cout << (int)(s.begin() - it2.second - it1.begin) << endl;
			cout << (distance(s.cbegin(),it1.first) < distance(s.cbegin(),it2.second) ? "Yes" : "No") << endl;
		}
	}
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

