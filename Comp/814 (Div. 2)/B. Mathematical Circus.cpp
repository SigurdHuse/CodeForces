#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
typedef long long ll;
using namespace std; 

void solve(){
	int n, k; cin >> n >> k;
	vector<int> pos, left, four;
	for(int i = 1; i <= n; ++i){
		if(((i + k) % 4) == 0) pos.push_back(i);
		else if(i % 4 == 0) four.push_back(i);
		else left.push_back(i);
	}
	if(SZ(pos) + SZ(four) < n/2){
		cout << "NO" << endl;
		return;
	}
	cout << "YES" <<endl;
	int indx1 = 0, indx2 = 0;
	while(indx1 < SZ(left)){
		if(indx1 < SZ(pos)) cout << pos[indx1] << " " << left[indx1] << endl;
		else{
			cout << left[indx1] << " " << four[indx2] << endl;
			indx2++;
		}
		indx1++;
	}
	while(indx1 < SZ(pos) || indx2 < SZ(four)){
		if(indx1 == SZ(pos) - 1){
			cout << pos[indx1] <<" " << four[indx2] << endl;
			indx1++;
			indx2++;
		}
		else if(indx1 < SZ(pos)){
			cout << pos[indx1] << " " << pos[indx1 + 1] << endl;
			indx1 += 2;
		}
		else{
			cout << four[indx2] << " " << four[indx2 + 1] << endl;
			indx2 += 2;
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

