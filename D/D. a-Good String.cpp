#include <bits/stdc++.h>
#define REP(i,n) for(int i = 0; i< (n);i++)
#define all(x) (x).begin(), (x).end()
#define f first  
#define s second
#define SZ(a) (int)a.size()
#define bit(x,i)(((x)>>(i))&1)
typedef long long ll;
using namespace std; 

string s;

int search(char c, int from, int to){
	//cout << c << " " << from << " " << to << endl;
	//cout << cnt1 << " " << cnt2 << endl;
	
	if(to -from == 1){
		//int one = (s[to] != c);
		int two = (s[from] != c);
		return two;
	}
	int mid = (to-from)/2 + from;
	int cnt1 = 0, cnt2 = 0;
	
	for(int i = from; i < mid; ++i){
		if(s[i] != c) cnt1++;
	}
	for(int i = mid; i < to; ++i){
		if(s[i] != c) cnt2++;
	}
	char new_c = c + 1;
	return min(cnt1 + search(new_c,mid,to), cnt2+search(new_c,from,mid)); 
}

void solve(){
	int n; cin >> n;
	cin >> s;
	cout << search('a', 0, n) << endl;
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

