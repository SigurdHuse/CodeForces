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
	vector<int> v(n);
	for(auto &a : v) cin >> a;
	int start = -1, end = n-1;
	
	if(is_sorted(all(v))){
		cout << "yes" << endl;
		cout << 1 << " " << 1 << endl;
 		cout << endl;
 		return;
	}
	
	for(int i = 0; i < n-1; ++i){
		if(v[i] > v[i+1] && (start == -1)){
			start = i;
		}
		if(v[i] < v[i+1] && start != -1){
			end = i;
			break;
		}
	}
	//cout << start << " " << end << endl;
	if(start != -1){
		reverse(v.begin() + start, v.begin() + end + 1);
	}
	if(is_sorted(all(v))){
		cout << "yes" << endl;
		cout << start + 1 << " " << end + 1 << endl;
 		cout << endl;
	}
	else cout << "no" << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

