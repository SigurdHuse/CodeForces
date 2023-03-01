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
	vector<ll> v(n), l(n), r(n);
	l[0] = 0;
	r[n-1] = 0;
	ll p = 0;
	for(auto &x : v) cin >> x;
	for(int i = 1; i < n; ++i){
		if(v[i] <= v[i-1]){
			l[i] = i - p;
			p = i;
		}
		else l[i] = i - p;
	}
	p = n-1;
	
	for(int i = n-2; i>= 0; --i){
		if(v[i] >= v[i+1]){
			r[i] = p-i;
			p = i;
		}
		else r[i] = p - i;
	}
	ll ans = 0;
	 for(int i=0;i<n;i++)
    {
        if(i>0&&(i<n-1)&&v[i+1]-v[i-1]>1) ans=max(ans,l[i]+r[i]+1);
        else ans=max({ans,1+l[i],1+r[i]});
    }
	cout << ans << endl;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	solve();
}

