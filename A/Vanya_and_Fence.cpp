#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int n, h, ans = 0, tmp;
    cin >> n >> h;
    for(int i = 0; i< n; i++){
        cin >> tmp;
        if(tmp > h) ans += 2;
        else ans++;
    }
    cout << ans << endl;
}