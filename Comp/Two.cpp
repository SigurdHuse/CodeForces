#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int n,t;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        int tmp = 0;
        for(int j = 0; j < n;j++) tmp ^= j;
        cout << tmp << endl;
    }
}