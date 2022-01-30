#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int nums[] = {4,7,44,47,74,77,444,447,474,477};
    int n; 
    cin >> n;
    for(int i : nums){
        if(n % i == 0){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" <<endl;
}