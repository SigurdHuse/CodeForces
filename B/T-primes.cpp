#include <bits/stdc++.h>
using namespace std; 

int main()
{
    long long int n, x;
    cin >> n;
    for(long long int i = 0; i< n; i++){
        cin >> x;
        long long int tmp = sqrt(x);
        if(tmp*tmp == x) cout << "YES" << endl; 
        else cout << "NO" <<endl;
    }
}