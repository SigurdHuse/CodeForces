#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int n, s = 0, take = 0, ans = 0;
    cin >>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        s += v[i];
    }
    sort(v.begin(), v.end());
    while(take <= s){
        s -= v[n-ans-1];
        take += v[n-ans-1];
        ans ++;
    }
    cout << ans << endl;
}