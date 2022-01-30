#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int n, mx = 0, in, out, cur = 0;
    cin >> n;
    for(int i = 0; i< n; i++){
        cin >> out >> in;
        cur += in - out;
        mx = max(mx, cur);
    }
    cout << mx << endl;
}