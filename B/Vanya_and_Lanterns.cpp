#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    long long int n, l, ans = 0;
    cin >>n >> l;
    vector<long long int> v(n);
    for(int i = 0; i< n;i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(int i = 1; i < n; i++){
        ans = max(ans, v[i] - v[i-1]);
    }
    double new_ans = max({(double)ans/2, (double)v[0], (double)l - v[n-1]});
    cout << setprecision(32)<<new_ans << endl;
}