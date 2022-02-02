#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int t, n, low = 0, up = 0, tmp, one = 0;
    cin >> t;
    for(int _ = 0; _ < t; _++){
        cin >> n >> tmp;
        int mi = tmp, mx = tmp;
        low = 0; up = 0;
        for(int i = 1; i< n;i++){
            cin >> tmp;
            if(tmp > mx){
                mx = tmp;
                up = i;
            }
            else if(tmp < mi){
                mi = tmp;
                low = i;
            }
        }
        if(low > up) swap(low, up);
        if(low+1< n - up){
            one = low+1;
            one += min(up -low, n - up);
        }
        else{
            one = n - up;
            one += min(up -low, low + 1);
        }
        cout << one << endl;
    }
}