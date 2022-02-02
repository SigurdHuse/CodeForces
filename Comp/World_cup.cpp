#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int n, indx;
    cin >> n;
    vector<long long int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    long long int mi = LONG_LONG_MAX;
    long long int ans;
    for(int i = 0; i< n; i++){
        long long int round;
        round = (v[i] -i +n)/n;
        if(round < mi){
            mi = round;
            ans = i;
        }
    }
    cout << ans << endl;
}