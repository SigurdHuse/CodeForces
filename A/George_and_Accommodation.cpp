#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int n, cap, now, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> now >> cap;
        if(now <= cap-2) ans++;
    }
    cout << ans << endl;
}