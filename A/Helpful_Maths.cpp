#include <bits/stdc++.h> 
using namespace std; 

int main()
{
    vector<int> numbers;
    string in, ans = "";
    int last = 0;
    cin >> in;
    for(int i = 0; i < in.size(); i++){
        if(in[i] == '+'){
            numbers.push_back(stoi(in.substr(last, i -last)));
            last = i;
        }
    }
    numbers.push_back(stoi(in.substr(last, in.size()-last)));
    sort(numbers.begin(), numbers.end());
    for(int i = 0; i< numbers.size()-1; i++){
        ans += to_string(numbers[i])+"+";
    }
    ans += to_string(numbers[numbers.size()-1]);
    cout << ans << endl;
}