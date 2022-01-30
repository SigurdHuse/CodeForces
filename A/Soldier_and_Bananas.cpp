#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    long long int cost = 0, n;
    int k, w;
    cin >> k >> n >>w;
    for(int i = 1; i <= w; i++){
        cost += i*k;
    }
    cout << max(0ll, cost -n) << endl;
}