#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    long long int n;
    int k; 
    cin >> n >> k;
    while(k > 0){
        if(n % 10) n--;
        else n/=10;
        k--;
    }
    cout << n << endl;
}