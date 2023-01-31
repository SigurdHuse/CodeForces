#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

string s1, s2;

void rv(int n){
	for(int i = 0; i < n; ++i){
		s1[i] = '1' - s1[i] + '0';
	}
	reverse(s1.begin(), s1.begin()+n);
}

void solve(){
	int n; cin >> n;
	cin >> s1 >>s2;
	vector<int> ans;
	
	
	for(int i = n-1; i > 0; --i){
		if(s1[i] != s2[i]){
			if(s1[0] == s2[i]){
				s1[0] = '1' - s1[0] + '0';
				ans.push_back(1);
			}
			if(i > 0){
				ans.push_back(i+1);
				rv(i+1);
			}
		}
	}
	if(s1[0] != s2[0]){
		s1[0] = '1' - s1[0] + '0';
		ans.push_back(1);
	}
	
	//cout << s1 << endl;
	int n1 = SZ(ans);
	cout << n1 << " ";
	for(int i = 0; i <n1; ++i) cout << ans[i] << " ";
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

