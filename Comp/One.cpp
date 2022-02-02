#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int t, n, cnt1, cnt2;
    cin >> t;
    string s;
    for(int i = 0; i< t;i++){
        cin >> n;
        cin >>s;
        cnt1 = 0;
        cnt2 = 0;
        for(char c : s){
            if(c == '1')cnt1++;
            else cnt2++;
        }
        if(cnt1 <= 1 && cnt2 <= 1){
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}