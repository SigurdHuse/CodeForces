#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int n; 
    cin >> n;
    vector<double> v(n);
    long long int x, y;
    for(int i = 0; i< n; i++){
        cin >> x >> y;
        v[i] = sqrt(pow(x,2) + pow(y,2));
    }
    sort(v.begin(),v.end());
}