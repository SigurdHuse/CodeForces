#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    string one, two;
    cin >> one>>two;
    int n = one.size();
    for(int i = 0; i < n; i++){
        if(one[i] != two[n-i-1]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES"<< endl;   
}