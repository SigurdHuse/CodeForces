#include <bits/stdc++.h>
using ll = long long;  
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int ans = 0;
	bitset<(int)1e7> prime;
	prime.set();
	//for (int i = 4; i <= n; i += 2) prime[i] = 0;
	for (ll p = 3; p<= n; p+=2)
    {
        if (prime[p])
        {
            for (ll i = p *p; i <= n; i += p) prime[i] = 0;
        }
    }
    //cout << prime << endl;
    for(int i = 3; i< n-1;i += 2){
		if(prime[i] && prime[i+2]) ans++;
	}
	cout << ans << endl;
}




