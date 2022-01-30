#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int n, ans = 0; 
    string stones;
    cin >> n >> stones;
    for(int i = 1; i< n; i++){
        if(stones[i] == stones[i-1]) ans++;
    }
    cout << ans << endl;
}