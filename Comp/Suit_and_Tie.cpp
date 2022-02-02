#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int n;
    cin >> n;
    vector<int> v(n*2);
    for(int i = 0; i< n*2; i++){
        cin >> v[i];
    }
    int ans = 0;
    for(int i = 1; i< n*2; i++){
        if(v[i] != v[i-1]) ans++;
        else i++;
    }
    cout << ans + ans%2 <<endl;
}