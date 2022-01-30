#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    //int one = 0, two = 0;
    string one, two;
    cin >> one >> two;
    for(int i= 0; i< one.size(); i++){
        if(tolower(one[i]) != tolower(two[i])){
            if(tolower(one[i]) < tolower(two[i])) cout << "-1" << endl;
            else cout << "1" << endl;
            return 0;
        }
    }
    cout << "0" << endl;
}