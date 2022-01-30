#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int n, ans = 0;
    cin >> n;
    string op;
    for(int i = 0; i< n; i++){
        cin >> op;
        if(op[0] == '-' || op[2] == '-') ans--;
        else ans++;
    }
    cout << ans << endl;
}