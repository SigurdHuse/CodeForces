#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int n, a, b;
    cin >> n;
    for(int i = 0; i< n; i++){
        cin >> a >> b;
        cout << min(b-a, ((a|b) -b + 1)) << endl;
        //cout << a << endl;
    }
}