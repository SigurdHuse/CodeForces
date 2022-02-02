#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    int t,n,f;
    cin >> t;
    for(int i = 0; i< t; i++){
        cin >> n;
        int cn1 = 0, cn2 = 0;
        for(int j = 0; j<n;j++){
            cin >> f;
            if(f == 1)cn1++;
            else cn2++;
        }
        if(cn1%2){
            cout << "NO" <<endl;
        }
        else{
            if(cn2%2 && cn1 < 2) cout << "NO" <<endl;
            else cout << "YES"<<endl;
        }
    } 
}