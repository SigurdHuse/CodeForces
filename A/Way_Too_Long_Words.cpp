#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    string in, out;
    int n; 
    cin >> n;
    for(int i = 0; i< n; i++){
        cin >> in;
        if(in.size() > 10){
            out = "";
            out += in[0];
            out += in[in.size()-1];
            out.insert(1, to_string(in.size()-2));
            cout << out << endl;
        }
        else cout << in << endl;
    }
}